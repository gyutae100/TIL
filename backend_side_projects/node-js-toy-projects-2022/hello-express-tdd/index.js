const express = require('express');
const morgan = require('morgan');
const bodyParser = require('body-parser');

const app = express();

// 공통 미들웨어
function commonmw(req, res, next) {
	console.log('commonmw');
	next(new Error('error ouccered'));
}

// 에러 미들웨어
function errormw(err, req, res, next) {
	console.log(err.message);
	next();
}

app.use(commonmw);
app.use(errormw);
app.use(morgan('dev'));
app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extends: true }));

app.get('/', function (req, res) {
	res.send('hello world');
});

let users = [
	{ id: 1, name: '1' },
	{ id: 2, name: '2' },
	{ id: 3, name: '3' },
	{ id: 4, name: '4' },
	{ id: 5, name: '5' },
];

app.get('/users', function (req, res) {
	req.query.limit = req.query.limit || 10;
	const limit = parseInt(req.query.limit, 10);

	if (Number.isNaN(limit)) {
		return res.status(400).end();
	}

	res.json(users.slice(0, limit));
});

app.get('/users/:id', function (req, res) {
	const id = parseInt(req.params.id, 10);

	if (Number.isNaN(id)) {
		return res.status(400).end();
	}

	const user = users.filter((user) => user.id === id)[0];

	if (!user) {
		return res.status(404).end();
	}

	res.json(user);
});

app.delete('/users/:id', (req, res) => {
	const id = parseInt(req.params.id, 10);

	if (Number.isNaN(id)) return res.status(400).end();

	users = users.filter((user) => user.id !== id);
	res.status(204).end();
});

app.post('/users', (req, res) => {
	const name = req.body.name;

	if (!name) {
		return res.status(400).end();
	}

	const isConflic = users.filter((user) => user.name === name).length;
	if (isConflic) {
		return res.status(409).end();
	}

	const id = Date.now();
	const user = { id, name };
	users.push(user);
	res.status(201).json(user);
});

app.put('/users/:id', (req, res) => {
	const id = parseInt(req.params.id, 10);

	if (Number.isNaN(id)) return res.status(400).end();

	const name = req.body.name;

	if (!name) return res.status(404).end();

	const isConlict = users.filter((user) => user.name === name).length > 0;
	if (isConlict) {
		return res.status(409).end();
	}

	const user = users.filter((user) => user.id === id)[0];

	if (!user) return res.status(404).end();

	user.name = name;

	res.json(user);
});

app.listen(5000, function () {
	console.log('server is running on port 5000');
});

module.exports = app;

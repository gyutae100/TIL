## 익스프레스 JS 기초

### 어플리케이션

1.  익스프레스 인스턴스를 어플리케이션이라고 한다.
2.  서버에 필요한 기능인 미들웨어를 어플리케이션에 추가한다.
3.  라우팅 설정을 할 수 있다.

## 미들웨어

1. 미들웨어는 함수들의 연속이다.
2. 로깅 미들웨어를 만들어보자.
3. 써드파티 미들웨어를 사용해보자.
4. 일반 미들웨어 vs 에러 미들웨어
5. 404, 500 에러 미들웨어를 만들어보자.

### 라우팅

1. 요청 url에 대해 적절한 핸들러 함수로 연결해 주는 기능을 라우팅이라고 부른다.
2. 어플리케이션의 get(), post() 메서드로 구현할 수 있다.
3. 라우팅을 위한 전용 Router 클래스를 사용할 수도 있다.

### 요청객체

1. 클라이언트 요청 정보를 담은 객체를 요청(Request) 객체라고 한다.
2. http 모듈의 request 객체를 래핑한 것이다.
3. req.params(), req.query(), req.body() 메소드를 주로 사용한다.

### 응답객체

1. 클라이언트 응답 정보를 담은 객체를 응답(Response) 객체라고 한다.
2. http 모듈의 response 객체를 래핑한 것이다.
3. res.sent(), res.status(), res.json() 메소드를 주로 사용한다.

### Mocha

1. 모카는 테스트 코드를 돌려주는 테스트 러너
2. 테스트 수트: 테스트 환경으로 모카에서는 describe()으로 구현한다.
3. 테스트 케이스: 실제 테스트를 말하며 모카에서는 it()으로 구현한다.

### node Assert

-   ?

## Should

1. 노드 assert 말고 서드파티 라이브러리를 사용하라
2. 슈드는 검증(assertion) 라이브러리이다.
3. 가독성 높은 테스트 코드를 만들 수 있다.

## Super Test

1. 단위 테스트: 함수의 기능 테스트
2. 통합 테스트: API의 기능 테스트
3. 슈퍼 테스트는 익스프레스 통합 테스트용 라이브러리이다.
4. 내부적으로 익스프레스 서버를 구동시켜 실제 요청을 보낸 뒤 결과를 검증한다.

## 첫 API 테스트 만들기

-   성공
    1. 유저 객체를 담은 배열로 응답한다.
    2. 최대 limit 갯수만큼 응답한다.
-   실패
    1. limit이 숫자형이 아니면 400을 응답한다.
    2. offset이 숫자형이 아니면 400을 응답한다.

## 코드 정리

-   역할에 따라 파일로 분리하자.
    1. api/user/index.js
    2. api/user/user.ctrl.js
        > ctrl은 컨트롤러 약자
    3. api/user/user.spec.js

## 데이터베이스

-   SQL

    > 테이블 형식의 SQL

    -   MySQL, postgreSQL, Aurora, Sqlite

-   NoSQL

    > 도큐먼트 형식의 SQL

    -   MongoDB, DynamoDB

-   In Memory DB
    > 인증토큰, 세션 등 자주 사용하는 데이터가 대상
    -   Redis, Memcashed

## SQL 쿼리 기초

-   insert users ('name') values ('alice');
-   select \* from users;
-   update users set name ='bek' where id = 1;
-   delete from users where id = 1;

## ORM

-   데이터베이스를 객체로 추상화해 논것을 ORM(Object Relational Mapping)이라고 한다.
-   쿼리를 직접 작성하는 대신 ORM의 메소드로 데이터 관리할 수 있는 것이 장점이다.
-   노드에서 SQL ORM은 시퀄라이져(Sequelize)가 있다.

## 시퀄라이져

-   `insert users ('name') values ('alice');` -> `User.create({name:'alice'})`
-   `select * from users;` -> `User.findAll()`
-   `upsdate users set name ='beck' where id = 1;` -> `User.update({name:'bek'}, {where:{id:1}})`
-   `delete from users where id = 1;` -> `User.destory({where: {id:1}});`

## 모델

-   데이터베이스 테이블을 ORM으로 추상화한것을 모델이라고 한다.
-   우리가 사용할 유저 모델을 만들어보자.
    -   squelize.define(): 모델 정의
    -   squelize.sync(): 데이터베이스 연동

## 참고

-   (인프런 테스트주도 개발) https://www.inflearn.com/course/%ED%85%8C%EC%8A%A4%ED%8A%B8%EC%A3%BC%EB%8F%84%EA%B0%9C%EB%B0%9C-tdd-nodejs-api/lecture/6184?tab=note&volume=0.17
-   http://expressjs.com/

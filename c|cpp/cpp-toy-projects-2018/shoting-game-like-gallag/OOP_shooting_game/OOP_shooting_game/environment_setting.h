#pragma once

#include <iostream>
using namespace std;



//------------------------------------------------------------------------------
//	*�Լ� �����*
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//	x ���� üũ
//
//	:��� ȭ�� ���� �ʺ�� ��
//------------------------------------------------------------------------------
bool CheckRangeX(int x);


//------------------------------------------------------------------------------
//	y ���� üũ
//
//	:��� ȭ�� ���� ���̿� ��
//------------------------------------------------------------------------------
bool CheckRangeY(int y);





//------------------------------------------------------------------------------
//	*typedef enum ���� �� ���Ǻ�*
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//	������Ʈ Ÿ��
//------------------------------------------------------------------------------
typedef enum TYPE_OBJECT
{
	C_OBJECT = 0,
	C_BULLET = 1,
	C_UNIT =2,
	C_PLAYER =3,
	C_ENERMY = 4

}TYPE_OBJECT;

//------------------------------------------------------------------------------
//	���� �÷��� ȭ�� ��� ũ�� ����
//
//	:�ʺ�� ����
//------------------------------------------------------------------------------
typedef enum SIZE_PLAY_SCREEN
{
	PLAY_SCREEN_WIDTH = 30,
	PLAY_SCREEN_HEIGHT = 13

}SIZE_PLAY_SCREEN;

//------------------------------------------------------------------------------
//	���� ȭ�� ��� ũ�� ����
//
//	:�ʺ�� ����
//------------------------------------------------------------------------------
typedef enum  SIZE_INFO_SCREEN
{
	INFO_SCREEN_WIDTH = PLAY_SCREEN_WIDTH,
	INFO_SCREEN_HEIGHT = 10

}SIZE_INFO_SCREEN;

//------------------------------------------------------------------------------
//	PLAY_SCREEN ��� ��ũ�� ���� ����
//
//	:������ ��� ������
//------------------------------------------------------------------------------
typedef enum POINT_GAME_SCREEN
{
	F_P_X = 0,
	F_P_Y = 0

}POINT_GAME_SCREEN;

//------------------------------------------------------------------------------
//	INFO_SCREEN ��� ��ũ�� ���� ����
//------------------------------------------------------------------------------
typedef enum POINT_INFO_SCREEN
{
	P_I_X = 0,
	P_I_Y = SIZE_PLAY_SCREEN::PLAY_SCREEN_HEIGHT + 2

}POINT_INFO_SCREEN;

//------------------------------------------------------------------------------
//	���� �б� 
//------------------------------------------------------------------------------
typedef enum SCENE_GAME
{
	TITLE = 0,
	GAME_PLAY = 1,
	GAME_UPDATE = 2,
	GAME_EXIT = 3,
	END_STATISTICS = 4

}SCENE_GAME;

//------------------------------------------------------------------------------
//	�̻��� Ÿ��
//------------------------------------------------------------------------------
typedef enum BULLET_TYPE
{
	STRAIGHT = 0

}BULLET_TYPE;

//------------------------------------------------------------------------------
//	�̻��� ����
//------------------------------------------------------------------------------
//typedef enum BULLET_DIRECTION
//{
//	LEFT = 0,
//	RIGHT = 1,
//	UP = 2,
//	DOWN = 3
//}BULLET_DIRECTION;

//------------------------------------------------------------------------------
//	���� ������
//------------------------------------------------------------------------------
typedef enum DIRECTION_MOVE
{
	MOVE_LEFT = 0,
	MOVE_RIGHT = 1,
	MOVE_UP = 2,
	MOVE_DOWN = 3,
	MOVE_STOP =4
}DIRECTION_MOVE;

//------------------------------------------------------------------------------
//	���� Ÿ��
//------------------------------------------------------------------------------
typedef enum UNIT_TYPE
{
	PLAYER = 0,
	ENERMY = 1
}UNIT_TYPE;

//------------------------------------------------------------------------------
//	������
//------------------------------------------------------------------------------
typedef enum FRAME
{
	PLAY_FRAME = 50,
	EFEECT_FRAME = 30
}FRAME;

//------------------------------------------------------------------------------
//	������Ʈ �ӵ�
//------------------------------------------------------------------------------
typedef enum OBJ_SPEED
{
	PLAYER_SPEED = 1,
	ENEMRY_SPEED = 1,
	BULLET_SPEED = 1
}OBJ_SPEED;

//------------------------------------------------------------------------------
//	�÷��̾� Ű �Է� Ŀ��� 
//
//	:�÷��̾� ������ŭ �̸� ����
//------------------------------------------------------------------------------
typedef enum COMMAND_PLAYER
{
	//Player1 Ŀ���
	KEY_UP = 0,
	KEY_DOWN = 1,
	KEY_LEFT = 2,
	KEY_RIGHT = 3,
	KEY_SPACE = 4,


}COMMAND_PLAYER;

//------------------------------------------------------------------------------
//	�÷��̾� ��ȣ
//------------------------------------------------------------------------------
typedef enum NUM_PLAYER
{
	FIRST_PLAYER = 0,
	SECOND_PLAYER = 1
}NUM_PLAYER;

//�÷��̾� ����ü
struct play_info_msg
{
		NUM_PLAYER from;
		COMMAND_PLAYER msg;
};

//�� ����
typedef enum SCEAN
{
	SCEAN_LOGO = 0,
	SCEAN_STAGE1 = 1,
	SCEAN_END = 2
}SCEAN;
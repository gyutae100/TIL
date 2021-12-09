
#pragma once

#include "stdafx.h"

#include <iostream>
using namespace std;

#include <windows.h>

#include "console.h"


//------------------------------------------------------------------------------
//	���� �ڵ� ���� 
//------------------------------------------------------------------------------
HANDLE hConsole;



//------------------------------------------------------------------------------
//		*�Լ� ���Ǻ�*
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
//	�ܼ� ���� ���� �غ� �۾�
//------------------------------------------------------------------------------
void cs_Initial(void)
{
	//------------------------------------------------------------------------------
	//	�ܼ� â ũ�� ����
	//------------------------------------------------------------------------------
	system("mode con: cols=75 lines=28");

	//------------------------------------------------------------------------------
	//	�ܼ� ���� ����
	//------------------------------------------------------------------------------
	system("title ���� �� ���� �κ��̴� ����!!");

	CONSOLE_CURSOR_INFO stConsoleCursor;
	//------------------------------------------------------------------------------
	//	ȭ�� Ŀ�� �Ⱥ��̰� ����
	//------------------------------------------------------------------------------
	stConsoleCursor.bVisible = FALSE;
	stConsoleCursor.dwSize = 1; //Ŀ�� ũ�� 1

	//------------------------------------------------------------------------------
	//	�ܼ�ȭ��(���ٴٵ� �ƿ�ǲ) �ڵ��� ���Ѵ�
	//------------------------------------------------------------------------------
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorInfo(hConsole, &stConsoleCursor);//Ŀ�� ����

}


//------------------------------------------------------------------------------
//	�ܼ� ȭ���� Ŀ���� X, Y ��ǥ�� �̵���Ų��
//------------------------------------------------------------------------------
void cs_MoveCursor(int iPosX, int iPosY)
{
	COORD stCoord;
	stCoord.X = iPosX;
	stCoord.Y = iPosY;

	SetConsoleCursorPosition(hConsole, stCoord);
}


//------------------------------------------------------------------------------
//	�ܼ� ȭ�� �ʱ�ȭ
//------------------------------------------------------------------------------
void cs_ClearScreen(void)
{

	for (int y = 0; y < SIZE_PLAY_SCREEN::PLAY_SCREEN_HEIGHT + 20; y++)
	{
		for (int x = 0; x < SIZE_PLAY_SCREEN::PLAY_SCREEN_WIDTH; x++)
		{
			cs_MoveCursor(x, y);
			printf(" ");

		}
	}

}
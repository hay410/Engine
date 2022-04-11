#pragma once
#include<Windows.h>
#include"Input.h"

#define WIN_WIDTH 1280
#define WIN_HEIGHT 720

class WindowsAPI
{
public:
	const int width = WIN_WIDTH;
	const int height = WIN_HEIGHT;
	HWND hwnd;
	RECT wrc;
	WNDCLASSEX w{};
	MSG msg;
	void Init();	
};
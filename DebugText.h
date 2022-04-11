#pragma once
#include "SpriteManager.h"

#define MAX_CHAR 256

class DebugText {
private:
	Sprite chars[MAX_CHAR];			//������

	const float FONT_WIDTH = 9;				//�t�H���g�̕�
	const float FONT_HEIGHT = 18;			//�t�H���g�̍���
	const int FONT_LINE_COUNT_X = 14;		//�t�H���g�e�N�X�`���̈��̕�����
	const int FONT_LINE_COUNT_Y = 7;		//�t�H���g�e�N�X�`���̈��̕�����

public:
	//�R���X�g���N�^
	DebugText();
	//������
	void Init();
	//�����񐶐�
	void Print(LPCWSTR fontFile, string text, float x, float y, float scaleX, float scaleY);
	void PrintBack(LPCWSTR fontFile, string text, float x, float y, float scaleX, float scaleY);
	//�`��
	void Draw();
};
#pragma once
#include<stdio.h>

class Microwave
{
	public://�����o�֐�
		//�R���X�g���N�^
		Microwave();
		//�f�X�g���N�^
		virtual	~Microwave();
		//�X�C�b�`
		virtual void Switch();

	protected://�����o�ϐ�
		//���O
		const char* name;

	};
#pragma once
#include<stdio.h>

class DeathEater
{
public://�����o�֐�
	//�R���X�g���N�^
	DeathEater();
	//�f�X�g���N�^
	virtual	~DeathEater();
	//�U��
	virtual void Attack();
	//�Ȃ�
	virtual void Wat();

protected://�����o�ϐ�
	//���O
	const char* name;

};


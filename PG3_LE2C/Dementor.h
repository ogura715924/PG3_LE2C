#pragma once
#include "DeathEater.h"

//�X���C���N���X�̒�`
class Dementor:public DeathEater
{
public:
	Dementor();
	~Dementor();
		//�U��
	virtual void Attack()override { printf("Dementer�̍U��"); };

private:
};


#pragma once
#include "DeathEater.h"

//�X���C���N���X�̒�`
class Dementor:public IDeathEater
{
public:
	Dementor();
	~Dementor();
		//�U��
	 void Attack() override;

private:
};


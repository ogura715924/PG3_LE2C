#pragma once
#include"DeathEater.h"

class Load:public DeathEater
{
public:
	Load();
	~Load();
	//�U��
	virtual void Attack()override { printf("Dementer�̍U��"); };

private:
};


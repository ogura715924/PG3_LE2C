#pragma once
#include "DeathEater.h"

//スライムクラスの定義
class Dementor:public DeathEater
{
public:
	Dementor();
	~Dementor();
		//攻撃
	virtual void Attack()override { printf("Dementerの攻撃"); };

private:
};


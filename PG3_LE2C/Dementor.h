#pragma once
#include "DeathEater.h"

//スライムクラスの定義
class Dementor:public DeathEater
{
public:
	Dementor();
	~Dementor();
		//攻撃
	 void Attack() override;
	 void Wat() override;

private:
};


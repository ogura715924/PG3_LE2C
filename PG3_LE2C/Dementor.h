#pragma once
#include "DeathEater.h"

//スライムクラスの定義
class Dementor:public IDeathEater
{
public:
	Dementor();
	~Dementor();
		//攻撃
	 void Attack() override;

private:
};


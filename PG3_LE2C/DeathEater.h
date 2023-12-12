#pragma once
#include<stdio.h>

class DeathEater
{
public://メンバ関数
	//コンストラクタ
	DeathEater();
	//デストラクタ
	virtual	~DeathEater();
	//攻撃
	virtual void Attack();
	//なんか
	virtual void Wat();

protected://メンバ変数
	//名前
	const char* name;

};


#pragma once
#include<stdio.h>


class IDeathEater
{
public://メンバ関数
	//攻撃
	virtual void Attack()=0;

protected://メンバ変数
	//名前
	const char* name;

};


#pragma once
#include <stdio.h>

//自作クラス
class Enemy {
public:
	//自作メンバ関数
	void Test();
	void TestFunc();
	void TestFunc2();
private:
	//メンバ関数ポインタ
	static void (Enemy::* pFuncTable[])();

	int index_ = 0;
};

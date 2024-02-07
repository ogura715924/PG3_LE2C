#pragma once
#include <stdio.h>

//自作クラス
class Enemy {
public:
	void Update();

	enum class Phase {
		kProximity,
		kire,
		kLeave,
	};
private:
	//自作メンバ関数
	void Approach(); // 接近する
	void Fire();     // 攻撃する
	void Leave();    // 離脱する
private:
	//メンバ関数ポインタ
	static void (Enemy::* pFuncTable[])();

	int index_ = 0;

};

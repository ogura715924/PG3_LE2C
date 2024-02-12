#pragma once
#include <stdio.h>

//自作クラス
class Enemy {
public:
	enum class Phase {
		kPApproach,
		kFire,
		kLeave,
	};

	void Update();

private:
	//自作メンバ関数
	void Approach(); // 接近する
	void Fire();     // 攻撃する
	void Leave();    // 離脱する
private:
	//メンバ関数ポインタ
	static void (Enemy::* pFuncTable[])();


	Phase phase_ = Phase::kPApproach;
};

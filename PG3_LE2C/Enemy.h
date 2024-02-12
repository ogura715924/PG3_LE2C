#pragma once
#include <stdio.h>

//����N���X
class Enemy {
public:
	enum class Phase {
		kPApproach,
		kFire,
		kLeave,
	};

	void Update();

private:
	//���상���o�֐�
	void Approach(); // �ڋ߂���
	void Fire();     // �U������
	void Leave();    // ���E����
private:
	//�����o�֐��|�C���^
	static void (Enemy::* pFuncTable[])();


	Phase phase_ = Phase::kPApproach;
};

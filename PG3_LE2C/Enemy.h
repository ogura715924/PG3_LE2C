#pragma once
#include <stdio.h>

//����N���X
class Enemy {
public:
	void Update();
private:
	//���상���o�֐�
	void Approach(); // �ڋ߂���
	void Fire();     // �U������
	void Leave();    // ���E����
private:
	//�����o�֐��|�C���^
	static void (Enemy::* pFuncTable[])();

	int index_ = 0;

};

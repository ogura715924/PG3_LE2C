#pragma once
#include <stdio.h>

//����N���X
class Enemy {
public:
	//���상���o�֐�
	void Test();
	void TestFunc();
	void TestFunc2();
private:
	//�����o�֐��|�C���^
	static void (Enemy::* pFuncTable[])();

	int index_ = 0;
};

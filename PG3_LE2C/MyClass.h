#pragma once
#include <stdio.h>

//����N���X
class MyClass {
public:
	//���상���o�֐�
	void Test();
	void TestFunc();
	void TestFunc2();
private:
	//�����o�֐��|�C���^
	static void (MyClass::*pFuncTable[])();

	int index_ = 0;
};

#pragma once
#include<stadio>

//����N���X
class MyClass {
public:
	//���상���o�֐�
	void TestFunc();
private:
	//�����o�֐��|�C���^
	void (Myclass::* pFunc)();
};

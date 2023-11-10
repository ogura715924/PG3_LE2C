#pragma once
#include<stadio>

//自作クラス
class MyClass {
public:
	//自作メンバ関数
	void TestFunc();
private:
	//メンバ関数ポインタ
	void (Myclass::* pFunc)();
};

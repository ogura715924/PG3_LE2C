#include "MyClass.h"

void(MyClass::* MyClass::pFuncTable[])() = {
	&MyClass::TestFunc,
	&MyClass::TestFunc2
};

void MyClass::Test() {
	(this->*pFuncTable[index_])();
}
void MyClass::TestFunc() {
	printf("1");
	index_++;
}
void MyClass::TestFunc2() {
	printf("2");
}
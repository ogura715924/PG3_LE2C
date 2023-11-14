#include "Enemy.h"

void(Enemy::* Enemy::pFuncTable[])() = {
	&Enemy::TestFunc,
	&Enemy::TestFunc2
};

void Enemy::Test() {
	(this->*pFuncTable[index_])();
}
void Enemy::TestFunc() {
	printf("1");
	index_++;
}
void Enemy::TestFunc2() {
	printf("2");
}
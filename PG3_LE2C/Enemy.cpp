#include "Enemy.h"

void(Enemy::* Enemy::pFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Fire,
	&Enemy::Leave
};

void Enemy::Approach() {
	printf("�ڋ�\n");
}
void Enemy::Fire() {
	printf("�ˌ�\n");
}
void Enemy::Leave() {
	printf("���E\n");
}

void Enemy::Update() {
	for (int i = 0; i <= 2; i++) {
		(this->*pFuncTable[i])();
	}
}
#include "Enemy.h"

void(Enemy::* Enemy::pFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Fire,
	&Enemy::Leave
};

void Enemy::Approach() {
	printf("Ú‹ß\n");
}
void Enemy::Fire() {
	printf("ËŒ‚\n");
}
void Enemy::Leave() {
	printf("—£’E\n");
}

void Enemy::Update() {
	for (int i = 0; i <= 2; i++) {
		(this->*pFuncTable[i])();
	}
}
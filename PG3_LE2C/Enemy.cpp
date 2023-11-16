#include "Enemy.h"

void(Enemy::* Enemy::pFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Fire,
	&Enemy::Leave
};

void Enemy::Approach() {
	printf("Ú‹ß\n");
	index_++;
}
void Enemy::Fire() {
	printf("ËŒ‚\n");
	index_++;
}
void Enemy::Leave() {
	printf("—£’E\n");
}
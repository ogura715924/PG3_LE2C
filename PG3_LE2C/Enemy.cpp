#include "Enemy.h"

void(Enemy::* Enemy::pFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Fire,
	&Enemy::Leave
};

void Enemy::Approach() {
	printf("�ڋ�\n");
	index_++;
}
void Enemy::Fire() {
	printf("�ˌ�\n");
	index_++;
}
void Enemy::Leave() {
	printf("���E\n");
}
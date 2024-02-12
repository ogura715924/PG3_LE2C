#include "Enemy.h"

void(Enemy::* Enemy::pFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Fire,
	&Enemy::Leave
};

void Enemy::Update() {
	/*for (int i = 0; i <= 2; i++) {
		(this->*pFuncTable[i])();
	}*/
	(this->*pFuncTable[static_cast<size_t>(phase_)])();
}


void Enemy::Approach() {
	printf("Ú‹ß\n");
	phase_ = Phase::kFire;
}
void Enemy::Fire() {
	printf("ËŒ‚\n");
	phase_ = Phase::kLeave;
}
void Enemy::Leave() {
	printf("—£’E\n");
}
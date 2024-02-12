#include <stdio.h>
#include "Enemy.h"

int main() {
	Enemy*enemy_=new Enemy();
	for (int i = 0; i <= 2; i++) {
		enemy_->Update();
	}
}
#include <stdio.h>
#include"Dementor.h"
#include"Load.h"
#include"DeathEater.h"

int main() {
	DeathEater* death_eaters[3]{};

	//�����t�F�[�Y
	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			death_eaters[i] = new Dementor;
		}
		else
			death_eaters[i] = new Load;
	}

	//�U���t�F�[�Y
	for (int i = 0; i < 2; i++) {
		death_eaters[i]->Attack();
	}

	//�U���t�F�[�Y
	for (int i = 0; i < 2; i++) {
		death_eaters[i]->Wat();
	}

	//�U���t�F�[�Y
	for (int i = 0; i < 2; i++) {
		death_eaters[i]->Attack();
	}

	//�j���t�F�[�Y
	for (int i = 0; i < 2; i++) {
		delete death_eaters[i];
	}

	return 0;
}
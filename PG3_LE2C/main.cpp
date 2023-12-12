#include <stdio.h>
#include"Microwave.h"
#include"Heating.h"
#include"Decompression.h"

int main() {
	Microwave* micro_wave[3]{};

	//生成フェーズ
	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			micro_wave[i] = new Heating;
		}
		else
			micro_wave[i] = new Decompression;
	}

	//ボタンフェーズ
	for (int i = 0; i < 2; i++) {
		micro_wave[i]->Switch();
	}


	//破棄フェーズ
	for (int i = 0; i < 2; i++) {
		delete micro_wave[i];
	}

	return 0;
}
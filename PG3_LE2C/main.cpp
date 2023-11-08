#include<stdio.h>
#include<Windows.h>
#include <stdlib.h>
#include<time.h>



typedef void (*PFunc)(int*);
int memory;
int dice;



//コールバック関数
void DispResult(int* s) {
	printf("%d秒待った\n", *s);

	printf("答え：%d\n", dice);

}



void setTimeout(PFunc p, int second) {
	//コールバック関数を呼び出す,3秒待つ
	Sleep(second * 1000);

	// 結果表示
	p(&second);
}


int main() {

	printf("奇数なら1を偶数なら0を押してください\n");
	
	// プレイヤーの入力処理、奇数か偶数を入力させる
	int mj;
	
	// サイコロ 1 ~ をふる
	unsigned int currentTime = time(nullptr);
	srand(currentTime);
	dice = rand() % 6 + 1;
	memory = dice;

	scanf_s("%d", &mj);
	if (mj == 1) {
		printf("奇数\n");
	}
	else if (mj == 0) {
		printf("偶数\n");
	}
	
	PFunc p;

	p = DispResult;
	setTimeout(p, 3);

	

	memory %= 2;
	if (mj == memory) {
		printf("正解\n");
	}
	else {
		printf("不正解\n");
	}

	return 0;
}
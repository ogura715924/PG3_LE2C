#include<stdio.h>
#include<Windows.h>
#/*include <stdlib.h>
#include<time.h>
int count=3;

int Sai(int a) {
	
	return 0;
}



int main(void) {
	
	printf("奇数なら1を偶数なら2を押してください\n");

	

	count--;

	unsigned int currentTime = time(nullptr);
	srand(currentTime);
	int num = 1+rand()%10;
	if (count <= 0) {
		printf("%d\n", num);
	}



	return 0;
}*/



typedef void (*PFunc)(int*);

void DispResult(int* s) {
	printf("%d秒待った\n", *s);
}

void serTimeout(PFunc p, int second) {
	Sleep(second * 1000);
	p(&second);
}

int main() {
	printf("start\n");
	PFunc p;
	p=Dis
}
#include<stdio.h>
#include<Windows.h>
#include <stdlib.h>
#include<time.h>
#include <functional>

typedef void (*PFunc)(int*);
int memory;
int dice;

//�R�[���o�b�N�֐�
void DispResult(int* s) {
	printf("%d�b�҂���\n", *s);

	printf("�����F%d\n", dice);

}

void setTimeout(PFunc p, int second) {
	//�R�[���o�b�N�֐����Ăяo��,3�b�҂�
	Sleep(second * 1000);

	// ���ʕ\��
	p(&second);
}

int main(int argc, const char* argv[]) {
	// �T�C�R�� 1~6 ���ӂ�
	unsigned int currentTime = time(nullptr);
	srand(currentTime);
	dice=rand() % 6 + 1;

	[]() { printf("��Ȃ�1�������Ȃ�0�������Ă�������\n"); }();

	
	// �v���C���[�̓��͏����A�����������͂�����
	int mj;

	scanf_s("%d", &mj);
	if (mj == 1) {
		printf("�\n");
	}
	else if (mj == 0) {
		printf("����\n");
	}

	PFunc p;

	p = DispResult;
	setTimeout(p, 3);

	std::function<int(int)>fx = [](int i) {return i % 2; };
	 dice= fx(dice);
	//dice %= 2;
	if (mj == dice) {
		printf("����\n");
	}
	else {
		printf("�s����\n");
	}
	//�O���������Ƃ������Ⴄ
	return 0;
}
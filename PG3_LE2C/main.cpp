#include<stdio.h>
#include<Windows.h>
#include <stdlib.h>
#include<time.h>



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


int main() {

	printf("��Ȃ�1�������Ȃ�0�������Ă�������\n");
	
	// �v���C���[�̓��͏����A�����������͂�����
	int mj;
	
	// �T�C�R�� 1 ~ ���ӂ�
	unsigned int currentTime = time(nullptr);
	srand(currentTime);
	dice = rand() % 6 + 1;
	memory = dice;

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

	

	memory %= 2;
	if (mj == memory) {
		printf("����\n");
	}
	else {
		printf("�s����\n");
	}

	return 0;
}
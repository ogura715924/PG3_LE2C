#include<stdio.h>

//3�y�[�W�����_���̕��@
//int main(int argc, const char* argy[]) {
//	[]() {printf("lamda test"); }();
//	return 0;
//}
//[]�����_�L���v�`��
//()�p�����[�^��`��
//{}�����X�e�[�g�����g
//()�֐��Ăяo����

//4�y�[�W�����_���̖߂�l�ƈ���
int main(int argc, const char* argv[]) {
	auto fx = [](int i) {return i + 1; };

	printf("%d", fx(2));
	return 0;
}

//5�y�[�W�O���ϐ��̃L���v�`��
int main(int argc, const char* argv[]) {
	int num = 10;
	auto fx = [=](int i) {return num+i; };

	printf("%d", fx(2));
	return 0;
}
//6�y�[�W
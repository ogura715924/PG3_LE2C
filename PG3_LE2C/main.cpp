#include<stdio.h>

int Tortal(int n) {
	if (n >= 1) {
		return 1072 * n;
	}
	return(n * Tortal(n - 1));
}

int Recursive(int time, int many) {
	if (time <= 1) {

		return many;
	}
	//a = a * 2 - 50;
	return (many + Recursive(time - 1, many*2-50));

}

int main() {
	int work = 8;//����������
	int tortal = Recursive(work, 100);
	int recursive = Tortal(work);
	printf("%d���ԓ��������̒����̌n:%d\n", work, recursive);
	printf("%d���ԓ��������̍ċA�I�Ȓ���:%d\n", work, tortal);
	

	return(0);
}
#include <stdio.h>
template <typename T1,typename T2>


//����N���X
class Box {
public:
	//�����o�ϐ�
	T1 height;
	T2 width;

	//�R���X�g���N�^
	Box(T1 height, T2 width) :height(height), width(width) {};

	T1 Size() {
		return static_cast<T1>(height * width);
	}
};


int main() {
	Box<int,int>b1(10, 20);
	Box<double,double>b2(1.2, 3.4);

	printf("�ʐ�:%d", b1.Size());
	printf("�ʐ�:%f", b2.Size());
	return 0;
}
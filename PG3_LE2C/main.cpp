#include <stdio.h>
template <typename T1,typename T2>


//自作クラス
class Box {
public:
	//メンバ変数
	T1 height;
	T2 width;

	//コンストラクタ
	Box(T1 height, T2 width) :height(height), width(width) {};

	T1 Size() {
		return static_cast<T1>(height * width);
	}
};


int main() {
	Box<int,int>b1(10, 20);
	Box<double,double>b2(1.2, 3.4);

	printf("面積:%d", b1.Size());
	printf("面積:%f", b2.Size());
	return 0;
}
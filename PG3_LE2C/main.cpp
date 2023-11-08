#include<stdio.h>

//3ページラムダ式の文法
//int main(int argc, const char* argy[]) {
//	[]() {printf("lamda test"); }();
//	return 0;
//}
//[]ラムダキャプチャ
//()パラメータ定義節
//{}複合ステートメント
//()関数呼び出し式

//4ページラムダ式の戻り値と引数
int main(int argc, const char* argv[]) {
	auto fx = [](int i) {return i + 1; };

	printf("%d", fx(2));
	return 0;
}

//5ページ外部変数のキャプチャ
int main(int argc, const char* argv[]) {
	int num = 10;
	auto fx = [=](int i) {return num+i; };

	printf("%d", fx(2));
	return 0;
}
//6ページ
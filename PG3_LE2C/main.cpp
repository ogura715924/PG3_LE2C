#include<stdio.h>
template<typename Type>

Type Min(Type a, Type b) {
	int c = 0;
	if (a < b) {
		c = a;
	}
	else if (a > b) {
		c = b;
	}

	return static_cast<Type>(c);
}

template<>
char Min<char>(char a, char b) {
	a = printf("”šˆÈŠO‚Í“ü—Í‚Å‚«‚Ü‚¹‚ñ");
	return a;
}


int main(void) {
	printf("%d\n", Min<int>(114, 551));
	printf("%f\n", Min< float>(114.0f, 551.4f));
	printf("%lf\n", Min< double>(114.0f, 551.4f));
	 Min<char>('a', 'b');

	return 0;
}
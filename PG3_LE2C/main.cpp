#include<stdio.h>
template<typename Type1, typename Type2>

Type1 add(Type1 a, Type2 b) {
	return static_cast<Type1>(a + b);
}

int main(void) {
	printf("%d/n", add<int,float>(114, 51.4f));

	return 0;
}
#include <stdio.h>
#include"Template.h"

int main() {
	Template<int, int>b1(30, 20);
	Template<float,float>b2(10.5f, 10.9f);
	Template<double, double>b3(1.2, 3.4);
	Template<int, float>b4(10, 20.4);
	Template<int, double>b5(28, 28.5);
	Template<float, double>b6(10.3f, 8.2);

	printf("int,int:%d\n", b1.Min());
	printf("float,float:%f\n", b2.Min());
	printf("double,doble:%f\n", b3.Min());
	printf("int,float:%d\n", b4.Min());
	printf("int,doble:%d\n", b5.Min());
	printf("float,doble:%f\n", b6.Min());
	return 0;
}
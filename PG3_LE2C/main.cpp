#include<stdio.h>

int m = 100;

int Recursive(int n) {
	if (n >= 1) {
		return 1072*n;
	}
	return(n*Recursive(n-1));
}



int Tortal(int t ) {
	if (t == 1) {


		return m;
	}
	m = m * 2 - 50;
	return (Tortal(t - 1));
	
}



int main() {
	int s = 9;//“­‚¢‚½ŠÔ
	int n = Recursive(s);
	int t = Tortal(s);
	printf("’À‹à‘ÌŒn:%d\n",n);
	printf("Ä‹A“I‚È’À‹à:%d",t);

	return(0);
}
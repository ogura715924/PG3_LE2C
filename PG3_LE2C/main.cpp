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
	int s = 9;//働いた時間
	int n = Recursive(s);
	int t = Tortal(s);
	printf("賃金体系:%d\n",n);
	printf("再帰的な賃金:%d",t);

	return(0);
}
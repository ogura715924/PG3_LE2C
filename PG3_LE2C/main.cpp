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
	int work = 8;//“­‚¢‚½ŽžŠÔ
	int tortal = Recursive(work, 100);
	int recursive = Tortal(work);
	printf("%dŽžŠÔ“­‚¢‚½Žž‚Ì’À‹à‘ÌŒn:%d\n", work, recursive);
	printf("%dŽžŠÔ“­‚¢‚½Žž‚ÌÄ‹A“I‚È’À‹à:%d\n", work, tortal);
	

	return(0);
}
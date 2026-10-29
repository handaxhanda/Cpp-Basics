#include <stdio.h>

int main(int argc, char** argv) {
	//配列変数aの宣言
	int a[3];
	//配列変数bの宣言と初期化
	double b[] = { 0.1,0.2,0.3 };
	int i;
	//配列変数aの初期値を代入
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	//配列の値を表示
	for (i = 0; i < 3; i++) {
		printf("a[%d]= %d", i, a[i]);
		printf("b[%d}=%lf\n",i,b[i]);
	}
	return 0;
}
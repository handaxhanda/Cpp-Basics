#include <stdio.h>

/*
	変数を使ったサンプル
	様々な値の代入と演算
*/
int main(int argc, char** argv) {
	//変数の宣言
	int a, b;
	//変数への値の代入
	a = 5;
	b = 2;
	// a,bの四則演算結果とその表示
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d %% %d = %d\n", a, b, a % b);

}
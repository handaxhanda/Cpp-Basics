#include <iostream>

using namespace std;

//グローバル変数power
int power;

//関数のプロトタイプ宣言
void funcA();
void funcB();

int main(int argc, char** argv) {
	power = 20;
	cout << "main:power=" << power << endl;
	funcA();
	funcB();
	return 0;
}
//プログラマAの処理
void funcA() {
	cout << "funcA:power=" << power << endl;
	//powerの値を変更
	power = 30;
}
//プログラマーBの処理
void funcB() {
	cout << "funcB:power=" << power << endl;
}
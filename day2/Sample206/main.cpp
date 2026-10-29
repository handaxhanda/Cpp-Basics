#include <iostream>

using namespace std;

//名前空間Aのpower
namespace A {
	int power;
}
//名前空間Bのpower
namespace B {
	int power;
}

//関数のプロトタイプ宣言
void funcA();
void funcB();

int main(int argc, char** argv) {
	A::power = 20;
	B::power = 30;
	cout << "main:A::power=" << A::power << endl;
	cout << "main:B::power=" << B::power << endl;
	funcA();
	funcB();
	return 0;
}
//プログラマAの処理
void funcA() {
	//名前空間Aを使う
	using namespace A;
	cout << "funcA::power=" << power << endl;
	cout << "funcA::power=" << B::power << endl;
	//power(名前空間A)の値を変更
	power = 40;
}
void funcB() {
	//名前空間Bを使う
	using namespace B;
	cout << "funcB::power=" << A::power << endl;
	cout << "funcB::power=" << power << endl;
}
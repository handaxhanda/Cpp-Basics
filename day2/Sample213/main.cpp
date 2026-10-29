#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int a = 100;//int型の変数
	int* p = nullptr;//int方のポインタ変数
	//aの値を表示
	cout << "a=" << a << endl;
	//pにaのアドレスを代入
	p = &a;
	//*pの値を表示
	cout << "*p=" << *p << endl;
	//*pの値を変更
	*p = 200;
	cout << "*pの値を200に変更" << endl;
	//aの値を表示
	cout << "a=" << a << endl;
	return 0;
}
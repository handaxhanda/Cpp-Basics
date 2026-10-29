#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int a = 100;//int方の変数
		cout << "aの値は" << a;
	cout << "大きさは" << sizeof(a) << "バイト";
	cout << "アドレスは" << std::hex << &a << "です。" << endl;//std::hexは16進数変換
	return 0;
}
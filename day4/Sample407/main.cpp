#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int i;
	int* p = new int[10];//int型10個分の領域を動的確保
	for (i = 0; i < 10; ++i) {
		p[i] = i;
		cout << p[i] << " ";
	}
	cout << endl;//改行処理
	delete[] p; //メモリ開放
	return 0;
}
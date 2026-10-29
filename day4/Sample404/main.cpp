#include <iostream>

using namespace std;


int main(int argc, char** argv) {
	int* p = NULL;
	int i;
	p = new int[10]; //int型10個分の領域を動的確保。() は不要.
	for (i = 0; i < 10; i++) {
		p[i] = i;
		cout << p[i] << " ";
	}
	cout << endl; //改行処理
	delete[] p;	//動的に確保した領域を開放。[]が必要
	return 0;
}
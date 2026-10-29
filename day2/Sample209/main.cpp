#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	while (true) {
		int n;
		cout << "正の値を入力してください:";
		cin >> n;
		//nが正の整数であればループから抜ける
		if (n > 0) {
			break;
		}
		cout << n << "は正の整数では有りません" << endl;
	}
	return 0;
}
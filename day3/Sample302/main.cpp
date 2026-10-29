#include <iostream>
#include "car.h"

using namespace std;

int main(int argc, char** argv) {
	//インスタンスの生成
	Car car1, car2;
	//スピードの設定
	car1.speed = 40;
	car2.speed = 50;
	//走行する
	cout << "car1のケース" << endl;
	car1.drive(1.5);

	cout << "car2のケース" << endl;
	car2.drive(1.0);
	return 0;
}
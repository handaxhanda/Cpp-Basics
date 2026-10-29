#include <iostream>
#include "car.h"

using namespace std;

int main(int argc, char** argv) {
	//インスタンスの生成
	Car car;
	//スピードの設定
	car.setSpeed(40);
	//走行する
	car.drive(1.5);
	//スピードの設定
	car.setSpeed(60);
	//走行する
	car.drive(2.0);
	//移動距離の表示
	cout << "総移動距離:" << car.getMigration() << "km" << endl;
	return 0;
}
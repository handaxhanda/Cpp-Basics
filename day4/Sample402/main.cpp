#include <iostream>
#include "car.h"

using namespace std;

int main(int argc, char** argv) {
	Car* pCar = nullptr;
	//インスタンスの生成
	pCar = new Car();
	//スピードの設定
	pCar->setSpeed(40);
	//走行する
	pCar->drive(1.5);
	//スピードの設定
	pCar->setSpeed(60);
	//走行する
	pCar->drive(2.0);
	//総移動距離の表示
	cout << "総移動距離:" << pCar->getMigration() << "km" << endl;
	//インスタンスの消去
	delete pCar;
	cout << "インスタンスの消去終了" << endl;
	return 0;
}
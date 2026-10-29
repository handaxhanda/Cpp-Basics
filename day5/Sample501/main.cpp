#include <iostream>
#include "car.h"
#include "ambulance.h"

using namespace std;

int main(int argc, char** argv) {
	cout << "--Carクラスの処理" << endl;
	Car* pCar = new Car();
	//自動車のスピードの設定
	pCar->setSpeed(40);
	//自動車が走行する
	pCar->drive(1.5);
	//自動車の総移動距離の表示
	cout << "総移動距離:" << pCar->getMigration() << "km" << endl;
	//自動車クラスのインスタンス消去
	delete pCar;
	cout << "--Ambukanceクラスの処理" << endl;
	Ambulance* pAmb = new Ambulance();
	//救急車のスピードの設定
	pAmb->setSpeed(60);
	//救急車が走行する
	pAmb->drive(2);
	//救急車総移動距離の表示
	cout << "総移動距離:" << pAmb->getMigration() << "km" << endl;
	//救急救命活動
	pAmb->sevePeople();
	//救急車クラスのインスタンスの消去
	delete pAmb;
	return 0;
}
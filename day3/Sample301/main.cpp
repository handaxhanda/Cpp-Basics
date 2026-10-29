#include <iostream>
#include "car.h"

using namespace std;

int main(int argc, char** argv) {
	//インスタンスの生成.
	Car car;
	//スピードの設定.
	car.speed = 40;
	//走行する.
	car.drive(1.5);
	return 0;
}
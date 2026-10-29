#include "car.h"
#include <iostream>

using namespace std;

//コンストラクタ
Car::Car() : m_speed(0.0), m_migration(0.0)//コンストラクタでメンバ変数を初期化.
{
	cout << "Carクラスの実体生成" << endl;
}

//デストラクタ
Car::~Car()
{
	cout << "Carクラスの実体消去" << endl;
}

void Car::setSpeed(double speed)
{
	m_speed = speed;
}

double Car::getSpeed()
{
	return m_speed;
}

double Car::getMigration()
{
	return m_migration;
}

void Car::drive(double hour)
{
	cout << "時速" << m_speed << "kmで" << hour << "時間走行" << endl;
	cout << m_speed * hour << "km移動しました。" << endl;
	m_migration += m_speed * hour;
}

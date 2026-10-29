#include "car.h"
#include <iostream>

using namespace std;

//コンストラクタ
Car::Car():m_speed(0.0f),m_migration(0.0f)
{
	cout << "== Carクラスのインスタンス生成 ==" << endl;
}

//デストラクタ
Car::~Car()
{
	cout << "==Carクラスのインスタンス消去==" << endl;
}

//スピードのセッター
void Car::setSpeed(double speed)
{
	m_speed = speed;
}

//スピードの取得
double Car::getSpeed()
{
	return m_speed;
}

//移動距離の取得
double Car::getMigration()
{
	return m_migration;
}

//走行する
void Car::drive(double hour)
{
	cout << "時速" << m_speed << "kmで" << hour << "時間走行" << endl;
	cout << m_speed * hour << " km移動しました。" << endl;
	m_migration += m_speed * hour;
}
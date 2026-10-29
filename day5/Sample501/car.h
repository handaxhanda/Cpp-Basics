#pragma once
class Car {
public:
	//コンストラクタ
	Car();
	//デストラクタ
	virtual ~Car();
	//スピードの設定(セッター)
	void setSpeed(double speed);
	//スピードの取得(ゲッター)
	double getSpeed();
	//移動距離の取得(ゲッター)
	double getMigration();
	//走行する
	void drive(double hour);
private:
	//スピード
	double m_speed;
	//移動距離
	double m_migration;
};
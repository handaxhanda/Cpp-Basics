#include "ambulance.h"
#include <iostream>

using namespace std;

//コンストラクタ
Ambulance::Ambulance() :m_number(119) {
	cout << "** Ambulanceクラスのインスタンスの生成 **" << endl;
}

//デストラクタ
Ambulance::~Ambulance() {
	cout << "** Ambulanceクラスのインスタンス消去 **" << endl;
}

//救急救命活動
void Ambulance::sevePeople() {
	cout << "救急救命活動" << endl
		<< "呼び出しは" << m_number << "番" << endl;
}
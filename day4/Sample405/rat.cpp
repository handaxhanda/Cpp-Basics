#include "rat.h"
#include <iostream>

using namespace std;

//ネズミの数の初期値を0に設定
int Rat::s_count = 0;

//コンストラクタ
Rat::Rat() :m_id(0) {
	s_count++; //ネズミの数を1つ増やす
	m_id = s_count; //ネズミの数をidとする
}
//デストラクタ
Rat::~Rat() {
	cout << "ネズミ:" << m_id << "消去" << endl;
	s_count--;
}

//ネズミの数の出力
void Rat::showNum() {
	cout << "現在のネズミの数は、" << s_count << "匹です。" << endl;
}

//ネズミが鳴く
void Rat::squeak() {
	cout << m_id << ":" << "チューチュー" << endl;
}
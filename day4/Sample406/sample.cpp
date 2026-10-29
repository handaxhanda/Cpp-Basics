#include "sample.h"
#include <iostream>

using namespace std;

//静的メンバ変数の初期化
int Sample::s_b = 0;

//インスタンスメンバ関数
void Sample::func1() {
	cout << "===func1===" << endl;
	//インスタンスメンバ変数への代入
	m_a = 1;
	//静的メンバ変数への代入
	s_b = 2;
	cout << "a=" << m_a << endl;
	cout << "b=" << s_b << endl;
}

//静的メンバ関数
void Sample::func2() {
	cout << "===func2===" << endl;
	//インスタンスメンバ変数への代入(エラー)
	//m_a = 3;
	//静的メンバ変数への男優
	s_b = 4;
	//cout << "a=" << m_a << endl;
	cout << "b=" << s_b << endl; 
}
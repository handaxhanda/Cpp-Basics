#include <iostream>
#include "sample.h"

using namespace std;
int main(int argc, char** argv) {
	//インスタンスの生成
	Sample* s = new Sample();
	//インスタンスメンバの呼び出し①
	s->func1();
	//インスタンスメンバの呼び出し②（エラー）
	//Sample::func1();
	//静的メンバの呼び出し①(推奨されない記述方法)
	s->func2();
	//静的メンバの呼び出し②(推奨される記述方法)
	Sample::func2();
	//インスタンスの初期ょ
	delete s;
	return 0;
}
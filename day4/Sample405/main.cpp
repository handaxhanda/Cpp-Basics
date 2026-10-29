#include "rat.h"
#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	Rat* r1, * r2, * r3;
	r1 = new Rat();//1匹目のネズミを生成
	r1->squeak();
	Rat::showNum();//ネズミの数を表示
	r2 = new Rat();//1匹目のネズミを生成
	r3 = new Rat();
	r2->squeak();
	r3->squeak();
	Rat::showNum();//ネズミの数を表示
	delete r1;//1匹目のネズミを削除
	delete r2;//2匹目のネズミを削除
	Rat::showNum();//ネズミの数を表示
	delete r3; //3匹目のネズミを削除
	Rat::showNum();//ネズミの数を表示
	return 0;
}
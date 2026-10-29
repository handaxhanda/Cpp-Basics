#include <iostream>
#include "sample.h"

using namespace std;

int main(int argc, char** argv) {
	Sample s;
	s.setNum(5);
	cout << s.getNum() << endl;
	return 0;
}
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int* p = nullptr;
	p = new int(); //intŒ^‚Ì—Ìˆæ‚ğŠm•Û
	*p = 123;
	cout << *p << endl;
	delete p; //“®“I‚ÉŠm•Û‚µ‚½—Ìˆæ‚ğÁ‹
	return 0;
}
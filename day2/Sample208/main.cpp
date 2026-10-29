#include <iostream>

using namespace std;
bool judge(int);

int main(int argc, char** argv) {
	int n;
	cout << "®”‚ğ“ü—Í:";
	cin >> n;
	if (judge(n)) {
		cout << "‚±‚Ì”‚Í0ˆÈã‚Å‚·B" << endl;
	}
	else {
		cout << "‚±‚Ì”‚Í0–¢–‚Å‚·B" << endl;
	}
	return 0;
}
//ˆø”‚ª0ˆÈã‚È‚çtrue,‚»‚¤‚Å‚È‚¯‚ê‚Îfalse‚ğ•Ô‚·
bool judge(int n) {
	if (n >= 0) {
		return true;
	}
	else {
		return false;
	}
}
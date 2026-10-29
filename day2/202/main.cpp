#include <iostream>

using namespace std;

int main(int argc,char** argv){
    int a,b;
    //変数a,bにキーボードから整数値を入力
    cout<<"a:";
    cin >>a;
    cout << "b=";
    cin >> b;
    //a+bの計算結果を表示
    cout << "a+b=" << a + b << endl;
    return 0;
}
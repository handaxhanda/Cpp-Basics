#include <iostream>
#include <stdio.h>

using namespace std;

// 文字列の扱い
int main(int argc, char **argv)
{

    char s1[] = {'a', 'b', 'c', '\0'}; // 文字列abc
    char s2[] = "HelloWorld";          // 文字列HelloWorld

    printf("==printfで表示==\n");
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);

    cout << "==coutで表示==" << endl;
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;

    return 0;
}

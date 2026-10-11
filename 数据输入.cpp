#include <iostream>
#include <windows.h>
using namespace std;



int main()
{
    SetConsoleOutputCP(65001);
    int a;
    cout << "请给变量A赋值：" << endl;
    cin >> a;
    cout << "整形变量A = " << a << endl;

    return 0;
}
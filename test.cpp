#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);

    for(int a = 0;a < 5;a++)
    {
        cout << "数组" << a << "为：" << endl;
    }
    return 0;
}
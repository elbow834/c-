#include <iostream>
#include <windows.h>
using namespace std;

constexpr double PI = 3.14;

class Circle
{
    public:
        int m_r;
        double calculateZC()
        {
            return 2 * PI * m_r;
        }
};


int main()
{
    SetConsoleOutputCP(65001);

    Circle c1;
    c1.m_r = 10;

    cout << "圆的周长为：" << c1.calculateZC() << endl;

    system("pause");
    return 0;
}
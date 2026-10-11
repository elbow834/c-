#include <iostream>
#include <windows.h>
using namespace std;

class Peroson
{
public:
    string m_Name;

protected:
    string m_Car;

private:
    int m_Password;

public:
    void func()
    {
        m_Name = "张三";
        m_Car = "拖拉机";
        m_Password = 123456;
    }
};

int main()
{
    SetConsoleOutputCP(65001);

    Peroson p1;
    p1.m_Name = "李四";                 
    // p1.m_Car = "奔驰";                //不能访问
    // p1.Password =  "666666";          //不能访问

    system("pause");
    return 0;
}
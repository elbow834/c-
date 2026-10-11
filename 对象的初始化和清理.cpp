#include <iostream>
#include <windows.h>
using namespace std;

class Person
{
public:
    Person()        //创造对象时调用
    {
        cout << "Person构造函数的调用" << endl;
    }



    ~Person()         //对象销毁时调用
    {
        cout << "Person析构函数调用" << endl;
    }
};

void test01()
{
    Person p;
}
int main()
{
    SetConsoleOutputCP(65001);
    test01();
    system("pause");
    return 0;
}

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

    Person(int a)        //
    {
        age = a;
        cout << "Person构造函数的调用" << endl;
    }

    Person(const Person &p)        //拷贝
    {
        age = p.age;
    }

    ~Person()         //对象销毁时调用
    {
        cout << "Person析构函数调用" << endl;
    }
    int age;
};

void test01()      //调用
{
    Person p1;//默认
    Person p2(10); //有参
    Person p3(p1);//拷贝
}

int main()
{
    SetConsoleOutputCP(65001);

    system("pause");
    return 0;
}
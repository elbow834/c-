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

    Person(int age)
    {
        cout << "Person有参构造函数的调用" << endl;
        m_Age = age;
    }

    ~Person()         //对象销毁时调用
    {
        cout << "Person析构函数调用" << endl;
    }

    Person(const Person &p)
    {
        cout << "Person拷贝构造函数的调用" << endl;
        m_Age = p.m_Age;
    }

    int m_Age;
};

void test01()
{
    Person p1(20);
    Person p2(p1);

    cout << p2.m_Age << endl;
}

void DoWork(Person p)
{

}

Person DoWork1()
{
    Person p1;
    return p1;
}

void test02()
{
    Person p = DoWork1();
}



int main()
{
    SetConsoleOutputCP(65001);
    test01();

    system("pause");
    return 0;
}
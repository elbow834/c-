#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class Person
{
public:
    void SetName(string name)
    {
        m_Name = name;
    }

    string GetName()
    {
        return m_Name;
    }
    int GetAge()
    {
        return m_Age;
    }
    void SetIdol(string idol)
    {
        m_Idol = idol;
    }
    void SetAge()
    {
        int age;
        cout << "请输入你的年龄：" << endl;
        cin >> age;
        if(age > 0 && age < 150)
        {
            m_Age = age;
        }
        cout << "年龄输入有误，请重新输入" << endl;
    }
private:
    int m_Age;     //只读
    string m_Name; //可读可写
    string m_Idol; //只写
};

int main()
{
    SetConsoleOutputCP(65001);
    Person p;
    p.SetName("张三");
    p.SetIdol("IU");
    p.SetAge();
    cout << "姓名为：" << p.GetName() << endl;
    cout << "年龄为：" << p.GetAge() << endl;

    system("pause");
    return 0;
}
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class Student
{
public:
    string m_Name;
    int m_ID;

    void ShowStudent()
    {
        cout << "姓名:" << m_Name << "  " << "ID:" << m_ID << endl; 
    }

    void SetName(string name)
    {
        m_Name = name;
    }

    void SetID(int Id)
    {
        m_ID = Id;
    }
};

int main()
{
    SetConsoleOutputCP(65001);
    Student s1;
    s1.SetName("张三");
    s1.SetID(1);
    s1.ShowStudent();

    Student s2;
    s2.m_Name = "李四";
    s2.m_ID = 2;
    s2.ShowStudent();

    system("pause");
    return 0;
}
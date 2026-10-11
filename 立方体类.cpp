#include <iostream>
#include <windows.h>
using namespace std;

class Cube
{
public:
    void SetL(int l)
    {
        m_L = l;
    }

    int GetL()
    {
        return m_L;
    }
    void SetW(int w)
    {
        m_W = w;
    }

    int GetW()
    {
        return m_W;
    }
    void SetH(int h)
    {
        m_H = h;
    }

    int GetH()
    {
        return m_H;
    }
    
    int calculateV()
    {
        return m_L * m_H * m_W;
    }
    int calculateS()
    {
        return 2 * m_H * m_L + 2 * m_H * m_W + 2 * m_L * m_W;
    }
    bool isSameByClass(Cube &c)
    {
        if((m_L == c.GetL() && m_H == c.GetH() && m_W == c.GetW())) 
        {
            return true;
        }      
        return false;       
    }
private:
    int m_L;
    int m_W;
    int m_H;

};

bool isSame(Cube c1,Cube c2)
{
    if(c1.GetH() == c2.GetH() && c1.GetL() == c2.GetL() && c1.GetW() == c2.GetW())
    {
        return true; 
    }
    return false;
}

int main()
{
    SetConsoleOutputCP(65001);
    Cube c1;
    c1.SetL(10);
    c1.SetH(10);
    c1.SetW(10);

    Cube c2;
    c2.SetL(10);
    c2.SetH(10);
    c2.SetW(11);  
    
    bool ret = isSame(c1,c2);

    if(ret)
    {
        cout << "c1,c2相等" << endl;
    }
    else 
    {
        cout << "c1,c2不相等" << endl;
    }

    ret = c1.isSameByClass(c2);
    if(ret)
    {
        cout << "ByClass:c1,c2相等" << endl;
    }
    else 
    {
        cout << "ByClass:c1,c2不相等" << endl;
    }

    cout << "c1的面积为:" << c1.calculateS() << endl;
    cout << "c1的体积为:" << c1.calculateV() << endl;
    
    system("pause");
    return 0;
}
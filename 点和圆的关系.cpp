#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

class Point
{
private:
    int m_X;
    int m_Y;
public:
    void SetX(int x)
    {
        m_X = x;
    }
    void SetY(int y)
    {
        m_Y = y;
    }
    int GetX()
    {
        return m_X;
    }
    int GetY()
    {
        return m_Y;
    }
};

class Circle
{
private:
    int m_R;
    Point m_Center;
public:
    void SetR(int r)
    {
        m_R = r;
    }
    int GetR()
    {
        return m_R;
    }
    void SetCenter(Point center)
    {
        m_Center = center;
    }
    Point GetCenter()
    {
        return m_Center;
    }
};

void isInCircle(Circle &c,Point &p)
{
    int D = sqrt(pow(c.GetCenter().GetX() - p.GetX(),2) + pow(c.GetCenter().GetY() - p.GetY(),2));
    if(c.GetR() > D)
    {
        cout << "点在圆内" << endl;
    }
    else if(c.GetR() == D)
    {
        cout << "点在圆上" << endl;
    }
    else
    {
        cout << "点在园外" << endl;
    }
}

int main()
{
    SetConsoleOutputCP(65001);
    Point p;
    p.SetX(2);
    p.SetY(2);
    Point center;
    center.SetX(4);
    center.SetY(3);
    Circle c;
    c.SetCenter(center);
    c.SetR(1);

    isInCircle(c,p);

    system("pause");
    return 0;
}
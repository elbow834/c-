
/*
机器⼈功率上限60 W，⽤超级电容做"功率缓冲"：缓冲能量上限300 J，初始50 J；机器⼈50 点⾎。给定连续5 秒的功率需求p1 
... p5（第i 秒消耗pi 焦⽿），逐秒结算：①pi ≤ 60：电池供pi，富余的 60 − pi 充⼊缓冲（最多充到300 J）；②pi > 60：
电池供60，超出部分从缓冲扣；缓冲不够时，每缺 1 J 扣 1 点⾎；③⾎扣到 0
，机器⼈在这⼀秒阵亡，之后⼏秒不再结算。你需要编写程序，输出最终⾎量、剩余缓冲能量和阵亡时刻（未阵亡输出Alive 
）
*/

#include <iostream>
#include <windows.h>
using namespace std;

int HP = 50,Buffer,Middle = 50;

int Calculate(int pi)
{
    if(pi <= 60 && pi >= 0)
    {
       
        Middle += 60 - pi;
        return Middle,HP;
    }
    else if(pi > 60)
    {
        
        if(Middle > pi - 60)
        {
            Middle -= pi - 60;
        } 
        else
        {
            HP = HP + Middle - pi + 60;
            Middle = 0;
        }
        return HP,Middle;
    }

}

int main()
{
    SetConsoleOutputCP(65001);

    int p,t = 0;
    while(HP >= 0 && t <= 5)
    {
        cout << "请输入p:"  << ":" << endl;
        cin >> p;
        Calculate(p);
        t++;
    }
    if(HP <= 0)
    {
        cout << "HP " << '0' << endl;
    }
    else 
    {
        cout << "HP " << HP << endl;
    }
    cout << "Middle " << Middle << endl;
    if(t < 5)
    {
        cout << "Death at" << t << endl;
    }
    else
    {
        cout << "Alive" << endl;
    }

    return 0;
}
#include <iostream>
#include <windows.h>
using namespace std;

bool isSame(string &s)
{
    
}

int main()
{
    SetConsoleOutputCP(65001);

    int Num,len,T = 0;
    int s1[1005],s2[1005];
    cout << "输入几个数字：" << endl;
    cin >> len;
    for(int i = 0;i < len;i++)
    {
        cout << "输入你的数字:" << endl;
        cin >> Num;
        s1[i] = Num;
    }

    bool ret = true;
    
    for(int j = 0;j < len;j ++)
    {
        for(int a = 0;a < len - j;a ++)
        {
            if(s1[j] != s1[a])
            {
                s1[a] = true;
                
            }
            else{
                s1[a] = false;

            }
            if(s1[a] == true)
            {
                s2[T] = s1[a];
                T++;
            }
        }
    }
    
    for(int c = 0;c < len ;c++)
    {
        if(s2[c] < s2[c+1])
        {
            int tem = s2[c+1];
            s2[c+1] = s2[c];
            s2[c] = tem;
        }
    }
    cout << endl;
    for(int b = 0;b < T;b++)
    {
        cout << s2[b] << "  ";
    }
    return 0;
}
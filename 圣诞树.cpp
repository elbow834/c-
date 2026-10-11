#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    int n;
    cout << "请输入你想要的层数：" << endl;
    cin >> n;
    for(int i = 2;i <= n + 1;i ++)            //几层树
    {
        for(int j = 1;j < i + 1;j ++)        //每层树有几层
        {
            for(int a = 0;a < 2 * n - 2 * (j - 1) ;a ++)       //打印几个空格
            {
                cout << ' '; 
            }
            for(int b = 0;b < 4 * j - 3;b++)          //打印*
            {
                cout << '*';
            }
            cout << '\n';
        }
    }
    for (int c = 0;c < n + 1;c++)
    {
        for(int d = 0;d < 2 * n - 1;d ++)
        {
            cout << ' ';
        } 
        for(int e = 0;e < 3;e++)
        {
            cout << '*';         
        }
        cout << endl;
    }
    return 0;
}
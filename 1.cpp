#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);

    int n;
    cout << "第二层有几个*" << endl;
    cin >> n;

    
    cout << " ";
    for(int j = 0;j < n - 2;j ++)
    {
        cout << "*" ;
    }
    cout << endl;
    for(int j = 0;j < n ;j ++)
    {
        cout << "*" ;
    }
    cout << endl;
    cout << " ";
    for(int j = 0;j < n - 2;j ++)
    {
        cout << "*" ;
    }
    cout  << endl;
    return 0;
}



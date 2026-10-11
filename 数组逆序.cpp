#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    int arr[5];
    for(int i = 0;i < 5;i++)
    {
        cin >> arr[i];
    }
    for (int j = 0;j < 2;j++)
    {
        int temp;
        temp = arr[j];
        arr[j] = arr[4 - j];
        arr[4 - j] = temp;
    }
    for(int a = 0;a < 5;a++)
    {
        cout << arr[a] << endl;
    }

    system("pause");

    return 0;
}
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    int arr[7] = {31,42,12,5,78,75,44};
    for(int i = 0;i < 7 - 1; i ++)
    {
        for(int j = 0;j < 7 - i - 1;j++)
        {
            if(arr[j + 1] > arr[j])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp; 
            }
        }
    }
    for(int k = 0;k < 7;k ++)
    {
        cout << arr[k] << ' ';
    }
    
    return 0;
}
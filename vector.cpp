#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);

    vector<int> v{1, 2, 3, 6, 7};
    v.push_back(5);
    for (int x : v)
    {
        cout << x << " " << endl;
    }

    system("pause");
    return 0;
}

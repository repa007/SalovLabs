#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter x\n";
    cin >> x;
    y = 2 * x * x + x + 1;
    if (y > 777)
    {
        cout << "(^.^)\n\n";
    }
    else
    {
        cout << "(0_o)\n\n";
    }
    system("pause");
    return 0;
}
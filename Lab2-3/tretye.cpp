#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
    int x, y, n;
    cout << "Enter x\n";
    cin >> x;
    y = 0;
    n = 0;
    while (y < 1000)
    {
        y = y + x;
        n = n + 1;
    }
    cout << "n = " << n <<endl;
    system("pause");
    return 0;
}
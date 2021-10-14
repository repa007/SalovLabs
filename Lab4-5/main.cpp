#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int  a;

    //заполнение массива
    const int len = 10;
    int arr[len];
    for (int i = 0; i <= len - 1; i++) { cin >> arr[i]; }

    // Сортировка массива
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                //переворот пар
                a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }

    // Вывод
    cout << "\n\n";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    

    system("pause");
    return 0;
}
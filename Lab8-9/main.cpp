#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int  a;

    //заполнение массива
    const int len = 10;
    int arr[len];
    for (int i = 0; i <= len - 1; i++)
    {
        cin >> arr[i];
    }

    // Сортировка массива
    int buf; // сохранени значения элемента сортируемого массива
    int buf2; // значение заменяемого элемента
    int j;

    for (int i = 1; i < len; i++) 
    { 

        buf = arr[i];
        j = i - 1;
        while (buf < arr[j] and j >= 0)  //пока buff меньше, arr[j]
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = buf;
    }

    // Вывод
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    system("pause");
    return 0;
}
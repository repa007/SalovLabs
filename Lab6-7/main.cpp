#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

void sort(vector<string>& array) //  вектор vec теперь имеет псевдоним array
{
    double k = 1.2473309; // фактор уменьшения
    int step = array.size() - 1; // шаг сортировки

    //Последняя итерация цикла, когда step==1
    while (step >= 1)
    {
        for (int i = 0; i + step < array.size(); i++)
        {
            if (stod(array[i]) > stod(array[i + step]))
            {
                swap(array[i], array[i + step]);
            }
        }
        step /= k;
    }
}

int main()
{

    // Ввод вектора
    vector<string> vec;
    string buffer = " "; // Если пусто, останавливаем ввод
    cout << "Enter array (Click enter twice to finish)\n";
    do {
        getline(cin, buffer);
        if (buffer.size() > 0) {
            vec.push_back(buffer);
        }
    } while (buffer != "");


    unsigned int len = vec.size(); // Переменная количества элементов


    // Вывод заполненного вектора на экран
    cout << "\nYour array:\n";
    for (int i = 0; i < len; i++) {
        cout << vec[i] << "  ";
    }

    //копирование вектора? не надо


    sort(vec); // Вызов сортировщика

    // Вывод
    cout << "\nOutput:\n";
    for (int i = 0; i < len; i++) {
        cout << vec[i] << "  ";
    }
    cout << endl;

    system("pause");
    return 0;
}

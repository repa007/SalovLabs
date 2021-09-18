#include <iostream>
#include <string>
using namespace std;

int main() {

	//объявляем переменные
	int a = 6;
	float b = 16.565;
	string c = "5.3";


	//преобразуем типы...
	a = double(a);
	b = double(b);
	double cc = stod(c); //зафигачили строку как дабл
	double Result = a + cc / b;

	cout << "(>^.^)> " << Result << endl << endl << endl;
}

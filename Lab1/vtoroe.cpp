#include <iostream>
#include <string>
using namespace std;

int main() {

	//��������� ����������
	int a = 6;
	float b = 16.565;
	string c = "5.3";


	//����������� ����...
	a = double(a);
	b = double(b);
	double cc = stod(c); //���������� ������ ��� ����
	double Result = a + cc / b;

	cout << "(>^.^)> " << Result << endl << endl << endl;
}
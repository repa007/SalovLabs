#include <iostream>
#include <string>
using namespace std;

int main() {

	//variable initializing
	int a = 6;
	float b = 16.565;
	string c = "5.3";

	//types converting
	double cc = stod(c); //string to double
	double Result = double(a) + cc / b;

	cout << "(>^.^)> " << Result << endl << endl << endl;
}

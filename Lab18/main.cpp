#include <iostream>
#include <chrono>
#include <iostream>
#include <ctime>  

using namespace std;

void bubbleSort(int* x, int size) { // собсна пузырёчек
	auto begin = std::chrono::steady_clock::now(); // начальное время
	for (int i = 0; i < size; i++) {
		for (int n = 0; n < size - 1; n++) {
			if (x[n] > x[n + 1]) {
				int y = x[n];
				x[n] = x[n + 1];
				x[n + 1] = y;
			}
		}
	}
	auto end = std::chrono::steady_clock::now();
	auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
	std::cout << elapsed_ms.count() << " ";
}

int main() {
	for (int SIZE = 1000; SIZE <= 100000; SIZE += 100) {
		int* x = new int[SIZE];
		for (int i = 0; i < SIZE; i++) { //заполнение массива
			x[i] = rand() % 100;
			//cout << x[i];
		}
		constexpr int size = sizeof(x) / sizeof(int);
		bubbleSort(x, SIZE);
	}
}
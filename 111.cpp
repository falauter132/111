#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

using namespace std;

void Random(int* arr, int size); //prototype
void Maximum(int* arr, int size);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	const int size = 7;
	int arr[size];
	cout << "Заповнення масиву випадковими числами: " << endl;
	Random(arr, size);

	cout << "\n max чимло ";
	Maximum(arr, size);

	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << ' ';
	}
	cout << endl;

	return 0;
}

void Random(int* arr, int size) {
	short i;
	for (i = 0; i < 7; i++) {
		*(arr + i) = -10 + rand() % (10 + 10 + 1);//int num = min + rand() % (max min + 1);
		cout << *(arr + i) << ' ';
	}
}

void Maximum(int* arr, int size) {
	short i;
	int max = *arr;
	for (i = 1; i < size; i++) {
		if (max < *(arr + i)) {
			max = *(arr + i);
		}
	}
	cout << max;
}
void Maximum(int arr[], int size) {
	int max = arr[0];
	int index = 0;
	for (int i = 1; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
			index = i;
		}
	}
	cout << "Max number:" << max << endl;

}
#include <iostream>

using namespace std;

int sum_arr(int* arr, int size);
int m_arr(int* arr, int size);
int min_arr(int* arr, int size);

int main(void){
	int arr[4] = { 1, 2, 3, 4 };
	int* ptr;
	ptr = arr;
	int size = sizeof(arr) / sizeof(arr[0]);
	int m = min_arr(ptr, size);
	cout << "" << m << endl;
	return 0;
}

int sum_arr(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum = sum + arr[i];
	return sum;
}

int m_arr(int* arr, int size) {
	int m = 1;
	for (int i = 0; i < size; i++)
		m *= arr[i];
	return m;
}

int min_arr(int* arr, int size) {
	int min = arr[0];
	for (int i = 0; i < size; i++)
		if (arr[i] < min)
			min = arr[i];
	return min;
}
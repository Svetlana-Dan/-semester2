#include <iostream>

using namespace std;

int sum_arr(int* arr, int size);
int mult_arr(int* arr, int size);
int min_arr(int* arr, int size);
int max_arr(int* arr, int size);
int sum_mult_arr(int* arr, int* arr1, int size);
int* gen_rand(int N, int begin, int end);

int main() {
	int N = 10, begin = -10, end = 20;
	int arr[10] = {};
	int arr1[10] = {};
	int* ptr = gen_rand(N, begin, end);
	int* ptr1 = gen_rand(N, begin, end);
	int sum = sum_arr(ptr, N);
	int mult = mult_arr(ptr, N);
	int min = min_arr(ptr, N);
	int max = max_arr(ptr, N);
	int sum_mult = sum_mult_arr(ptr, ptr1, N);
	cout << "First array: ";
	for (int i = 0; i < N; i++) {
		cout << ptr[i] << " ";
	}
	cout << " " << endl;
	cout << "Second array: ";
	for (int i = 0; i < N; i++) {
		cout << ptr1[i] << " ";
	}
	cout << " " << endl;
	cout << "Sum: " << sum << endl;
	cout << "Multiplication: " << mult << endl;
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	cout << "Multisum: " << sum_mult << endl;
	return 0;
}

int sum_arr(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

int mult_arr(int* arr, int size) {
	int mult = 1;
	for (int i = 0; i < size; i++) {
		mult = mult * arr[i];
	}
	return mult;
}

int min_arr(int* arr, int size) {
	int min = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

int max_arr(int* arr, int size) {
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

int sum_mult_arr(int* arr, int* arr1, int size) {
	int sum_mult = 0;
	for (int i = 0; i < size; i++) {
		sum_mult = sum_mult + (arr[i] * arr1[i]);
	}
	return sum_mult;
}

int* gen_rand(int N, int begin, int end) {
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
		arr[i] = begin + rand() % (end - begin + 1);
	return arr;
}
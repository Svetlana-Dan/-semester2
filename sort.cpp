#include <iostream>
#include <ctime>

using namespace std;

int* gen_rand(int N, int begin, int end);
void print(int* arr, int N);
void sort(int* arr, int size);

int main() {
	srand(time(NULL));
	int N = 1000000;
	int k = 1;
	int begin, end;
	begin = -10;
	end = 20;
	int arr[10] = {};
	N = N * k;
	int* ptr = gen_rand(N, begin, end);
	print(ptr, N);
	time_t t1;
	t1 = clock();
	sort(ptr, N);
	print(ptr, N);
	time_t t2;
	t2 = clock();
	int dt = (int)(t2 - t1);
	cout << "N = " << N << "   dt = " << dt << endl;
	return 0;
}

int* gen_rand(int N, int begin, int end) {
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
		arr[i] = begin + rand() % (end - begin + 1);
	return arr;
}

void print(int* arr, int N) {
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void sort(int* arr, int size) {
	int buf;
	int i, j;
	for (i = 1; i < size; i++) {
		buf = arr[i];
		for (j = i - 1; j >= 0 && buf < arr[j]; j--)
			arr[j + 1] = arr[j];
		arr[j + 1] = buf;
	}
}
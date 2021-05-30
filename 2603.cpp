#include <iostream> 

using namespace std;

unsigned int factorial(unsigned int n);
unsigned int sum(unsigned int n);
unsigned int exp(signed int x, signed int n);

int main() {
	int f = factorial(5);
	cout << "factorial = " << f << endl;
	int s = sum(126);
	cout << "Sum = " << s << endl;
	int e = exp(4, 8);
	cout << "Exp. = " << e << endl;
}

unsigned int factorial(unsigned int n) {
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

unsigned int sum(unsigned int n) {
	if (n < 10)
		return n;
	return sum(n / 10) + n % 10;
}

unsigned int exp(signed int x, signed int n) {
	if (n == 0) {
		return 1;
	}
	else {
		if (n % 2 == 1) {
			return x * exp(x, n - 1);
		}
		else {
			return exp(x ^ 2, n / 2);
		}
	}
}
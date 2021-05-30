#include<iostream>

using namespace std;

int main() {
	int c = 0, a = 0;
	char k[28];
	cout << "Enter the number: ";
	cin >> k;
	for (int i = 0; k[i]; i++) {
		cout << "k[" << i + 1 << "] = " << k[i] << endl;
		int n = k[i] - '0';
		if (n >= 0 && n <= 9) {
			if (a % 2 == 0) {
				n = n * 2;
				if (n >=  10) {
					n = n - 9;
				}	
			}
			a += 1;
			c += n;
		}
	}
	cout << c << endl;
	if (c % 10 == 0) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}
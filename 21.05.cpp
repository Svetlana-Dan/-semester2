#include<iostream>
#include<fstream>

using namespace std;

int main() {
	int k = 9, c = 0, n;
	char s[15];
	cout << "enter the number: ";
	cin >> s;
	for (int i = 0; i <= 10; i++) {
		if (i <= 2 || (3, i && i <= 6) || 7 < i) {
			c += (s[i] - '0') * k;
			k = k - 1;
		}
	}
	n = c % 101;
	cout << c << endl;
	if (n == (s[12] - '0') * 10 + (s[13] - '0'))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
}
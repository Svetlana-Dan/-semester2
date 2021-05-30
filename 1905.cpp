#include<iostream>

using namespace std;

int last_war(int k);
int main() {
	int n, v;
	cout << "Enter N: ";
	cin >> n;
	v = last_war(n);
	cout << "Last warriors: " << v << endl;
}

int last_war(int k) {
	if (k = 1)
		return 1;
	else
		if (k % 2 == 0)
			return 2 * last_war(k / 2) - 1;
		else
			return 2 * last_war(k / 2) + 1;
}
#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int n = 0;
	short int day = 1;
	int month = 5;
	int year = 2021;
	int Nbit = 8 * sizeof(n);
	n = n | year;
	n = n | (month << 14);
	n = n | (day << 18);
	for (int i = Nbit - 1; i >= 0; i--) {
		bool a = n & (1 << i);
		cout << a;
		//_getch();
	}
	cout << '\n';
	year = 0;
	year = n & ((1 << 14) - 1);
	cout << "Year = " << year << endl;
	month = 0;
	month = (n >> 14) & ((1 << 4) - 1);
	cout << "Month = " << month << endl;
	day = 0;
	day = (n >> 18) & ((1 << 5) - 1);
	cout << "Day = " << day << endl;

}
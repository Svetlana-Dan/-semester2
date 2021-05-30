#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

const int height = 200;
const int width = 200;

int calc_area(char** field, int i, int j);

int main(void) {
	ifstream in("A:\\Users\\149u13.STUDY\\Downloads\\ГенераторФигур\\Demo-task\\input1.dat");
	if (!in.is_open()) {
		cout << "File input.dat is not opened\n";
		return -1;
	}
	cout << "File input.dat is opened\n";

	char** field = new char* [height];
	int rows = 0;
	while (!in.eof()) {
		field[rows] = new char[width + 1];
		in.getline(field[rows], width + 1);
		if (in.fail()) {
			cout << "I am here!\n";
			break;
		}
		rows++;
	}
	in.close();

	for(int i = 1; i < height - 1; i++)
		for (int j = 1; j < width - 1; j++) {
			int area = calc_area(field, i, j);
			if (area > 0)
				cout << "Area = " << area << endl;
		}
	for (int i = 0; i < height; i++)
		delete[] field[i];
	delete[] field;
	return 0;
}

int calc_area(char** field, int i, int j) {
	if (field[i][j] != '1') {
		return 0;
	}
	else if (field[i][j] == '1') {
		field[i][j] = '2';
		return 1 + calc_area(field, i - 1, j - 1) +
			calc_area(field, i - 1, j + 1) +
			calc_area(field, i - 1, j) +
			calc_area(field, i, j - 1) +
			calc_area(field, i, j + 1) +
			calc_area(field, i + 1, j - 1) +
			calc_area(field, i + 1, j) +
			calc_area(field, i + 1, j + 1);
	}
}
#include "Print.h"


void Print(int arr[], const int n) {

	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}

	cout << endl;
}
void Print(double arr[], const int n) {

	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}

	cout << endl;
}
void Print(char arr[], const int n) {

	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}

	cout << endl;
}

void Print(int arr[][n], const int column, const int rows) {

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < column; j++) {
			cout << arr[i][j] << tab;
		}
	}

	cout << endl;
}
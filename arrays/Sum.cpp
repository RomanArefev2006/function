#include "Sum.h"

int Sum(int arr[], const int n) {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	return sum;
}
int Sum(double arr[], const int n) {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	return sum;
}
int Sum(char arr[], const int n) {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	return sum;
}int Sum(int arr[][n], const int column, const int rows) {
	int sum = 0;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < column; j++) {
			sum += arr[i][j];
		}
	}

	return sum;
}
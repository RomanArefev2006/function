#include "minValueIn.h"



double minValueIn(int arr[], const int n) {
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}
double minValueIn(double arr[], const int n) {
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}
double minValueIn(char arr[], const int n) {
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}
double minValueIn(int arr[][n], const int column, const int rows) {
	int min = arr[0][0];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < column; j++) {
			if (arr[i][j] < min) {
				min = arr[i][j];
			}
		}
	}
	return min;
}

#include "maxValueIn.h"



double maxValueIn(int arr[], const int n) {

	int max = arr[0];

	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	return max;

}
double maxValueIn(double arr[], const int n) {

	int max = arr[0];

	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	return max;

}
double maxValueIn(char arr[], const int n) {

	int max = arr[0];

	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	return max;

}
double maxValueIn(int arr[][n], const int column, const int rows) {

	int max = arr[0][0];

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < column; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
		}
	}

	return max;

}

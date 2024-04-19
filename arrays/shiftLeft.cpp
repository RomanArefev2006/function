#include "shiftLeft.h"




void shiftLeft(int arr[], const int n, const int x) {

	int num;

	for (int i = 0; i < x; i++) {
		num = arr[0];
		for (int j = 0; j < n - 1; j++) {
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = num;
	}

	for (int i = 0; i < n; i++) {
		cout << "\t" << arr[i];
	}
	cout << endl;
}
void shiftLeft(double arr[], const int n, const int x) {

	int num;

	for (int i = 0; i < x; i++) {
		num = arr[0];
		for (int j = 0; j < n - 1; j++) {
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = num;
	}

	for (int i = 0; i < n; i++) {
		cout << "\t" << arr[i];
	}

}
void shiftLeft(char arr[], const int n, const int x) {

	int num;

	for (int i = 0; i < x; i++) {
		num = arr[0];
		for (int j = 0; j < n - 1; j++) {
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = num;
	}

	for (int i = 0; i < n; i++) {
		cout << "\t" << arr[i];
	}

}
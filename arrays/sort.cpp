#include "sort.h"


void sort(int arr[], const int n) {
	int buffer;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				buffer = arr[j]; // ������� �������������� ����������
				arr[j] = arr[j + 1]; // ������ �������
				arr[j + 1] = buffer; // �������� ���������
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}

	cout << endl;
}
#include "Sum.h"


template<typename T>
T Sum(T arr[], const int n) {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	return sum;
}
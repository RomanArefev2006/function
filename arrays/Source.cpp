#include <iostream>

using namespace std;

#define tab "\t"

template<typename T>
void FillRand(T arr[], const int n, int minRand = 0, int maxRand = 100);

template<typename T>
void Print(T arr[], const int n);

template<typename T>
T Sum(T arr[], const int n);

template<typename T>
T Avg(T arr[], const int n);


int main() {
	setlocale(LC_ALL, "");

	const int n = 7;
	double arr[n];

	FillRand(arr, n);
	Print(arr, n);

	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арефмитическое: " << Avg(arr, n) << endl;

	return 0;
}


template<typename T>
void FillRand(T arr[], const int n, int minRand, int maxRand) {
	if (maxRand < minRand) {
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < n; i++) {
		arr[i] = minRand + rand() % (maxRand - minRand);
	}
}

template<typename T>
void Print(T arr[], const int n) {

	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}

	cout << endl;
}

template<typename T>
T Sum(T arr[], const int n) {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	return sum;
}

template<typename T>
T Avg(T arr[], const int n) {
	return (double)Sum(arr, n) / n;
}

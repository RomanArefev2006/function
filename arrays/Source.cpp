#include <iostream>

using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void Print(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
double minValueIn(int arr[], const int n);
double maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n, const int x);


int main() {
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n];

	int minRand, maxRand, Left;

	do {
		cout << "Введите минимальное число: "; cin >> minRand;
		cout << "Введите max число: "; cin >> maxRand;
		if (minRand == maxRand) cout << "Приделы диапазона не должны совпадать" << endl;
	} while (minRand == maxRand);

	FillRand(arr, n, minRand, maxRand);
	Print(arr, n);

	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арефмитическое: " << Avg(arr, n) << endl;
	cout << "Максимальный эллемент: " << maxValueIn(arr, n) << endl;
	cout << "Минимальный эллемент: " << minValueIn(arr, n) << endl;
	cout << "Минимальный эллемент: " << minValueIn(arr, n) << endl;
	cout << "Введите число для сдвига: "; cin >> Left;
	cout << "Сдвиг в лево: " << endl;
	shiftLeft(arr, n, Left);

	return 0;
}

void FillRand(int arr[], const int n, int minRand, int maxRand) {
	if (maxRand < minRand) {
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < n; i++) {
		arr[i] = minRand + rand() % (maxRand - minRand);
	}
}

void Print(int arr[], const int n) {

	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}

	cout << endl;
}

int Sum(int arr[], const int n) {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	return sum;
}

double Avg(int arr[], const int n) {
	return (double)Sum(arr, n) / n;
}

double maxValueIn(int arr[], const int n) {

	int max = arr[0];

	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	return max;

}


double minValueIn(int arr[], const int n) {
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

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

}
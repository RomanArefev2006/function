#include <iostream>

using namespace std;

#define tab "\t"

const int n = 5;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[][n], const int column, const int rows, int minRand = 0, int maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[][n], const int column, const int rows);

int Sum(int arr[], const int n); 
int Sum(double arr[], const int n);
int Sum(char arr[], const int n);
int Sum(int arr[][n], const int column, const int rows);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(char arr[], const int n);
double Avg(int arr[][n], const int column, const int rows);

double minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
double minValueIn(char arr[], const int n);
double minValueIn(int arr[][n], const int column, const int rows);

double maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
double maxValueIn(char arr[], const int n);
double maxValueIn(int arr[][n], const int column, const int rows);

void shiftLeft(int arr[], const int n, const int x);
void shiftLeft(double arr[], const int n, const int x);
void shiftLeft(char arr[], const int n, const int x);
//void shiftLeft(int arr[][n], const int n, const int x);

void sort(int arr[], const int n);


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
	cout << "sort: ";

	sort(arr, n);


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
void FillRand(double arr[], const int n, int minRand, int maxRand) {
	if (maxRand < minRand) {
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < n; i++) {
		arr[i] = minRand + rand() % (maxRand - minRand);
	}
}
void FillRand(char arr[], const int n, int minRand, int maxRand) {
	if (maxRand < minRand) {
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < n; i++) {
		arr[i] = minRand + rand() % (maxRand - minRand);
	}
}
void FillRand(int arr[][n], const int column, const int rows, int minRand, int maxRand) {
	if (maxRand < minRand) {
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < column; j++) {
			arr[i][j] = minRand + rand() % (maxRand - minRand);
		}
	}
}



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




double Avg(int arr[], const int n) {
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n) {
	return (double)Sum(arr, n) / n;
}
double Avg(char arr[], const int n) {
	return (double)Sum(arr, n) / n;
}
double Avg(int arr[][n], const int column, const int rows) {
	return (double)Sum(arr, column, rows) / (column * rows);
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

void sort(int arr[], const int n) {
	int buffer;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				buffer = arr[j]; // создали дополнительную переменную
				arr[j] = arr[j + 1]; // меняем местами
				arr[j + 1] = buffer; // значения элементов
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << tab;
	}

	cout << endl;
}
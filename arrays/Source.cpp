#include "FillRand.h"
#include "Print.h"
#include "Sum.h"
#include "Avg.h"
#include "minValueIn.h"
#include "maxValueIn.h"
#include "shiftLeft.h"
#include "sort.h"
#include "Constants.h"
#include "stdafx.h"


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
#include "stdafx.h"
#include "FillRand.h"
#include "FillRand.cpp"
#include "Sum.h"
#include "Sum.cpp"
#include "Print.h"
#include "Print.cpp"
#include "Avg.h"
#include "Avg.cpp"


int main() {
	setlocale(LC_ALL, "");

	const int n = 7;
	int arr[n];

	FillRand(arr, n);
	Print(arr, n);

	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арефмитическое: " << Avg(arr, n) << endl;

	return 0;
}



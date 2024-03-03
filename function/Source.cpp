#include <iostream>

using namespace std;


int Factorial(int x) {
	int res = 1;
	for (int i = 1; i <= x; i++) {
		res *= i;
	}
	return res;
}

long long Power(long long x, long long y) {
	long long res = x;
	for (int i = 0; i < y; i++) {
		res *= x;
	}
	return res;
}

void main() {
	setlocale(LC_ALL, "");
	int x, y;
	cout << "¬ведите 2 числа: "; cin >> x >> y;
	cout << "Factorial " << x << " " << Factorial(x) << endl;
	cout << "Power " << Power(x, y);
}
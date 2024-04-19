#include "Avg.h"
#include "Sum.h"

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
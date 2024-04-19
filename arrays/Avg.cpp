#include "Avg.h"

template<typename T>
T Avg(T arr[], const int n) {
	return (double)Sum(arr, n) / n;
}

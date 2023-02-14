#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdarg.h>
using namespace std;
int tmp;
double array(int n, ...);
#define swap(l, r, tmp) ((tmp) = (l), (l) = (r), (r) = (tmp))

#define print(arr, size) {\
    int i;\
    for (i = 0; i < size; i++) {\
        printf("%d ", arr[i]);\
    }\
    printf("\n");\
}

void CreateArray(int* arr, const int size)
{
	arr = new int[size];
	for (int i = 0; i < size; i++)
		arr[i] = 0;
}

void CreateNumbers(int* arr, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		arr[i] = Low + rand() % (High - Low + 1);
}

void QuickSort(int* arr, int first, int last)
{
	int l = first, r = last, p = arr[(first + last) / 2];
	do {
		while (arr[l] < p) l++;
		while (arr[r] > p) r--;
		if (l <= r) {
			if (arr[l] > arr[r])
				swap(arr[l], arr[r],tmp);
			l++;
			r--;
		}
	} while (l <= r);
	if (l < last)
		QuickSort(arr, l, last);
    if (first < r)
		QuickSort(arr, first, r);
}

int main()
{
	
	const int n = 20;
	int a[n];
	CreateArray(a, n);
	// &arr[i] = &число з функції (Ідея)
	
    srand((unsigned)time(NULL));
	
    print(a, n);
	QuickSort(a, 0, n - 1);
    print(a, n);
	return 0;
}

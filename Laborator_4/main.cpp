#include<iostream>
#include"Sort.h"
using namespace std;
int main()
{
	Sort v1(15,2, 10);
	v1.Print();
	int vect2[8] = { 3, 4,1,5, 3, 1, 6, 86 };
	Sort v2(vect2, 8);
	v2.Print();
	v2.BubbleSort(true);
	v2.Print();
	v2.BubbleSort(false);
	v2.Print();
	Sort v3(10, 1, 5, 3, 6, 2, 10, 11, 41, 56, 40);
	v3.Print();
	char sir[] = "20,32,14,215,21";
	Sort v4(sir);
	v4.Print();
	Sort v5;
	v5.Print();
	v4.QuickSort();
	v4.Print();
	v3.InsertSort();
	v3.Print();
	return 0;
}
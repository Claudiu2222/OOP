#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include "NumberList.h"
using namespace std;
int main()
{
	NumberList n1;
	NumberList n2;

	n1.Init();
	n2.Init();
	
	n1.Add(3);
	n1.Add(2);
	n1.Add(5);
	n1.Add(1);

	n1.Print();  // 3 2 5 1

	n1.Sort();

	n1.Print(); // 1 2 3 5

	n2.Add(3);
	n2.Add(5);
	n2.Add(63);
	n2.Add(12);
	n2.Add(22);
	n2.Add(11);
	n2.Add(10);
	n2.Add(29);
	n2.Add(29);
	n2.Add(39);
	n2.Add(2429);  // count >= 10

	n2.Print(); // 2429 is not displayed, as it is not added to the array

	n2.Sort();

	n2.Print();


	
	return 0;
}
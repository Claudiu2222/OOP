#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include "Math.h"
int main()
{
	Math obj1;
	printf("%d\n", obj1.Add(2, 5)); // 7
	printf("%d\n", obj1.Add(2, 5,3)); // 10 
	printf("%d\n", obj1.Add(3.3, 2.5)); // 5
	printf("%d\n", obj1.Add(2.3, 5.33, 1.1)); // 8
	printf("%d\n", obj1.Mul(3, 4)); // 12
	printf("%d\n", obj1.Mul(3, 4,5)); // 60
	printf("%d\n", obj1.Mul(1.2, 3.3)); // 3
	printf("%d\n", obj1.Mul(1.2, 3.3,1.2)); // 4

	
	printf("%d\n",obj1.Add(4, 1, 2, 3, 5)); // 1 + 2 + 3 + 5 = 11
	printf("%s", obj1.Add("StringUnu","StringDoi"));

	return 0;
}
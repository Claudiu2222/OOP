#include<iostream>
#include"Number.h"
using namespace std;
int main()
{
	Number n1("11001101101", 2);
	n1.SwitchBase(16);
	printf("%d",n1.GetDigitsCount());


	return 0;
}
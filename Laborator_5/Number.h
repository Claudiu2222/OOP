#pragma once
class Number
{
	int base;
	char* number;

public:

	Number(const char* value, int base); // where base is between 2 and 16

	~Number();


	bool operator<(Number nr1);
	bool operator>(Number nr1);
	bool operator==(Number nr1);
	bool operator<=(Number nr1);
	bool operator>=(Number nr1);

	// add operators and copy/move constructor
	Number(const Number& n1);//copy constructor
	Number(const Number&& n1); // move constructor

	friend Number operator+(Number nr1, Number nr2);
	friend Number operator-(Number nr1, Number nr2);
	



	void SwitchBase(int newBase);

	void Print();

	int  GetDigitsCount(); // returns the number of digits for the current number

	int  GetBase(); // returns the current base
};


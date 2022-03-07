#pragma once
class Math
{
public:

    static int Add(int n1, int n2);

    static int Add(int n1 , int n2, int n3);

    static int Add(double n1 , double n2);

    static int Add(double n1 , double n2 , double n3);

    static int Mul(int n1 , int n2);

    static int Mul(int n1, int n2, int n3);

    static int Mul(double n1, double n2);

    static int Mul(double n1, double n2, double n3);

    static int Add(int count, ...); // sums up a list of integers

    static char* Add(const char* n1, const char* n2);
};


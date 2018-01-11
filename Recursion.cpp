#include "Recursion.h"

int Power(int num, int exp)
{
	if (exp == 0) {
		return 1; //Base Case
	}
	else {

		return num * Power(num, exp-1); //Recursive Case
	}
}

int Fibonacci(int num)
{
	if (num == 0 || num == 1) { //Base Cases
		return num;
	}
	else {
		return Fibonacci(num - 2) + Fibonacci(num - 1); //Recursive Case
	}
	return 0;
}

int Factorial(int num)
{
	if (num == 0)
		return 1; //Base Case
	else {
		return num*Factorial(num - 1); //Recursive Case
	}
}

int Summation(int num)
{
	if (num == 1) { //Base Case
		return 1;
}
	else {
		return num + Summation(num - 1); //Recursive Case
	}
}

int AddArray(int a[], int index)
{
	if (index == 0) { //Base Case
		return a[0];
	}
	else
	{
		return a[index] + AddArray(a, index - 1); //Recursive Case
	}
}

int Multiply(int a)
{
	if (a == 0) {
		return 0;
	}
	else
	return a + Multiply(a-1);
}
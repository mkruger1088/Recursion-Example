#include "Recursion.h"

int main() {

	int num = 5;
	int exp = 3;
	int arr[5] = {10, 20, 30, 40, 50};
	cout << "Power Function: " << Power(num, exp) << endl;
	cout << "Fibonacci Function: " << Fibonacci(num) << endl;
	cout << "Factorial Function: " << Factorial(num) << endl;
	cout << "Summation Function: " << Summation(num) << endl;
	cout << "AddArray Function: " << AddArray(arr, 4) << endl;
	cout << "Multiply Function: " << Multiply(num) << endl;
	
	cin.get();
	return 0;
}
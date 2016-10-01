#include <iostream>
using namespace std;

double a;
	int main()
	{
		cout << "enter a decimals: " ;
		cin >> a;
		return a;

	}
	int noDecimal(double a) 
	{ 
		return static_cast<int>(a); 
	}
#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "Enter three numbers here? "; 
	cin >> a >> b >> c; 
	cout << endl;

	int temp = a; 
	if (temp < b) {
		temp = b;
	}
	else if (temp < c) {
		temp = c;
	}
	else {
		temp = a;
	}
	cout << a << b << c; //Didnt know if you wanted us to make it print the variables in order. 
	return 0;
}

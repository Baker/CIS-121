#include <iostream>
using namespace std; 
int main() {
	int length , width; 
	cout << "Enter the length" <<endl;
	cin >> length;
	cout << "Enter the width" <<endl;
	cin >> width;
	cout << "The perimeter of the rectangle is: " << (length * 2)+ (width *2);
	return 0;
}
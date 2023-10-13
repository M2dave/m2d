#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Enter a four-digit number: ";
	cin >> number;

	int sum = 0;
	while (number > 0) {
		sum += number % 10; 
		number /= 10;
	}

	cout << "Sum of digits: " << sum << endl;

	return 0;
}
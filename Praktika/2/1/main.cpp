#include <iostream>
using namespace std;

int main() {
	double input = 0;
	cout << "Celsius: ";
	cin >> input;
	cout << "Fahrenheit: " << input * 1.8 + 32 << endl;
	return 0;
}

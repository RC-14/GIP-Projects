#include <iostream>
using namespace std;

int main() {
	char input = ' ';
	cout << "Buchstabe: ";
	cin >> input;
	cout << "Position im Alphabet: " << int(input) - 96 << endl;
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
	int input[5];
	int indexes[2] = { 0, 0 };
	string unnecessaryArray[2] = { "kleinste", "groesste" };

	for (int i = 0; i < 5; i++) {
		cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
		cin >> input[i];
	}

	for (int i = 1; i < 5; i++) {
		if (input[indexes[1]] > input[i]) {
			indexes[0] = i;
		}
		else if (input[indexes[0]] < input[i]) {
			indexes[1] = i;
		}
	}

	for (int i = 0; i < 2; i++) {
		cout << "Die " << indexes[i] + 1 << ". Zahl war die " << unnecessaryArray[i] << " der eingegebenen Zahlen und lautet: " << input[indexes[i]] << endl;
	}

	return 0;
}

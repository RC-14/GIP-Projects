#include <iostream>
#include <string>
using namespace std;

int main() {
	string input = "";
	bool valid = false;
	bool palindrom = true;

	while (!valid) {
		valid = true;
		palindrom = true;

		cout << "Text: ? ";
		getline(cin, input);

		for (int i = 0; i < input.length() / 2; i++) {
			char c1 = input[i];
			char c2 = input[input.length() - 1 - i];

			if (c1 < 'a' || c1 > 'z' || c2 < 'a' || c2 > 'z') {
				valid = false;
				break;
			}

			if (c1 != c2) palindrom = false;
		}

		if (!valid) continue;
		if (input[input.length() / 2] >= 'a' && input[input.length() / 2] <= 'z') break;
		valid = false;
	}

	cout << "Das eingegebene Wort ist ";

	if (palindrom) {
		cout << "ein";
	} else {
		cout << "KEIN";
	}

	cout << " Palindrom." << endl;

	return 0;
}

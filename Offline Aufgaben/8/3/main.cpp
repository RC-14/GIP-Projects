#include <iostream>
using namespace std;

const int maxLength = 20;

char* my_strconcat(const char* ptr1, const char* ptr2) {
	char* output = new char[maxLength * 2 + 1];

	int oi = 0;

	for (int i = 0; i < maxLength; i++) {
		if (ptr1[i] == '\0') break;

		output[oi] = ptr1[i];
		oi++;
	}
	for (int i = 0; i < maxLength;i++) {
		if (ptr2[i] == '\0') break;

		output[oi] = ptr2[i];
		oi++;
	}

	output[oi] = '\0';

	return output;
}

int main() {
	char* input1 = new char[maxLength + 1];
	char* input2 = new char[maxLength + 1];

	cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
	cin.getline(input1, maxLength + 1);

	cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
	cin.getline(input2, maxLength + 1);


	cout << "Ergebnis my_strconcat(): " << my_strconcat(input1, input2) << endl;
	return 0;
}

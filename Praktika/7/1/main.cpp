#include<iostream>
#include<string>
#include<fstream>
#include<personList.h>
using namespace std;

void writeFileAccordingToTemplate(ofstream* file, ifstream* tmpl, LinkedPerson* firstPersonPtr) {
	string inLine = "";
	LinkedPerson* currentPersonPtr = firstPersonPtr;

	for (getline(*tmpl, inLine); !tmpl->eof(); getline(*tmpl, inLine)) {
		for (int i = 0; i < inLine.length(); i++) {
			// No special action required
			if (inLine[i] != '%' && inLine[i] != '$') {
				*file << inLine[i];
				continue;
			}

			// Insert "Kurzliste"
			if (inLine[i] == '%') {
				while (currentPersonPtr != nullptr) {
					*file << "<b>" << currentPersonPtr->nachname << "</b>, " << currentPersonPtr->vorname << "<br/>" << endl;
					currentPersonPtr = currentPersonPtr->nextPtr;
				}
				currentPersonPtr = firstPersonPtr;
				continue;
			}

			// Insert "Lange Liste"
			while (currentPersonPtr != nullptr) {
				*file << "<b>" << currentPersonPtr->vorname << " " << currentPersonPtr->nachname << "</b>, " << currentPersonPtr->geburtstag << "<br/>" << endl;
				currentPersonPtr = currentPersonPtr->nextPtr;
			}
		}

		*file << endl;
	}
}

int main() {
	ifstream daten("inputFiles/personendaten.txt", ios::in);
	ifstream tmpl("inputfiles/webseite.html.tmpl", ios::in);
	ofstream file("outputFiles/webseite.html", ios::out | ios::trunc);

	bool fileError = false;
	if (daten.fail()) {
		cout << "Error reading daten" << endl;
		fileError = true;
	}
	if (tmpl.fail()) {
		cout << "Error reading tmpl" << endl;
		fileError = true;
	}
	if (file.fail()) {
		cout << "Error creating file" << endl;
		fileError = true;
	}

	if (fileError) return 1;

	LinkedPerson firstPerson = makeLinkedPersonList(&daten);
	daten.close();

	writeFileAccordingToTemplate(&file, &tmpl, &firstPerson);
	tmpl.close();
	file.close();
	
	return 0;
}

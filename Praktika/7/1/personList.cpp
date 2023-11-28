#include<iostream>
#include<personList.h>
using namespace std;

LinkedPerson makeLinkedPersonList(ifstream* daten) {
	LinkedPerson* firstPersonPtr = nullptr;
	LinkedPerson* currentPersonPtr = nullptr;

	while(true) {
		string nachname, vorname, geburtstag = "";

		*daten >> nachname;
		*daten >> vorname;
		*daten >> geburtstag;
		if (daten->eof()) break;

		if (firstPersonPtr == nullptr) {
			currentPersonPtr = new LinkedPerson;
			firstPersonPtr = currentPersonPtr;
		}
		else {
			while (currentPersonPtr->nextPtr != nullptr) {
				currentPersonPtr = currentPersonPtr->nextPtr;
			}
			currentPersonPtr->nextPtr = new LinkedPerson;
			currentPersonPtr = currentPersonPtr->nextPtr;
		}

		currentPersonPtr->nachname = nachname.substr(0, nachname.length() - 1);
		currentPersonPtr->vorname = vorname.substr(0, vorname.length() - 1);
		currentPersonPtr->geburtstag = geburtstag;
	}

	return *firstPersonPtr;
}

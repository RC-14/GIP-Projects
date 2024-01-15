#include<string>
#include<fstream>

struct LinkedPerson {
	std::string vorname, nachname, geburtstag = "";
	LinkedPerson* nextPtr = nullptr;
};

LinkedPerson makeLinkedPersonList(std::ifstream* daten);

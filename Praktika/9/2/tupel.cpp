#include <tupel.h>
#include <string>

template <typename T1, typename T2> int vergleiche(Tupel<T1, T2> p1, Tupel<T1, T2> p2) {
	if (p1.komponente1 > p2.komponente1 && p1.komponente2 > p2.komponente2) return 1;
	if (p1.komponente1 < p2.komponente1 && p1.komponente2 < p2.komponente2) return -1;
	return 0;
};

template int vergleiche<std::string, int>(Tupel<std::string, int> p1, Tupel<std::string, int> p2);
template int vergleiche<int, int>(Tupel<int, int> p1, Tupel<int, int> p2);

#pragma once

template <typename T1, typename T2> struct Tupel {
	T1 komponente1;
	T2 komponente2;
};

template <typename T1, typename T2> int vergleiche(Tupel<T1, T2> p1, Tupel<T1, T2> p2) {
	if (p1.komponente1 > p2.komponente1 && p1.komponente2 > p2.komponente2) return 1;
	if (p1.komponente1 < p2.komponente1 && p1.komponente2 < p2.komponente2) return -1;
	return 0;
};

#include <iostream>
#include "Primes.h"
#include <climits>

// weiter mit folge 33

void doSmth(int& a, int& b, int c) {
	a = b + c;
	b = 0;
	c = 3;
}

int main() {
	int x = 3, y = 5, z = 4;
	doSmth(x, y, z);
	std::cout << x << " " << y << " " << z << std::endl;
	doSmth(x, y, z);
	std::cout << x << " " << y << " " << z << std::endl;

	int end;
	std::cin >> end;

	return 0;
}
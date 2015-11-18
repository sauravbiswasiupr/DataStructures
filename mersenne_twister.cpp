#include <iostream>
#include <random>

// Program to simulate mersenne twister random number generation

void mersenneGenerator(unsigned int limit) {
	// Print random numbers "limit" number of times
	std::random_device rd;
	std::mt19937 mersenne(rd());

	for (int i = 0; i < limit; i++) {
		std::cout<<mersenne()<<"\t";
		if ((i + 1) % 5 == 0)
			std::cout<<"\n";
	}
}

int main() {
	unsigned int limit = 100;
	mersenneGenerator(limit);
	return 0;
}
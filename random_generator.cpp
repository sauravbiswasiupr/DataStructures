#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>

void generateRandomNumbers(unsigned int limit) {
	//srand(5323);
	srand(static_cast<unsigned int>(time(0)));

	for (int i = 0; i < limit; i++) {
		std::cout<<rand() <<"\t";
		if ((i + 1) % 5 == 0)
           std::cout<<"\n";
	}
}

int main() {
	generateRandomNumbers(100);
}
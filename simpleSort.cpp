// Simple sorting example in C++ using arrays and vectors

#include<iostream>
#include<vector>
#include<algorithm>

void sorter(std::vector<int>* vec, int size) {
	std::sort((*vec).begin(), (*vec).begin() + size);
}

int main() {
	int numbers[] = {1, 10, 5, 2, 3, 79, 4, 12};
	int size = static_cast<int>(sizeof(numbers)/sizeof(int));
	std::cout<<"array size is: "<<size<<std::endl;

	std::vector<int> vect(numbers, numbers + size);
	sorter(&vect, size);
	//std::sort(vect.begin(), vect.end());

	std::vector<int>::iterator it;

	for(it = vect.begin(); it != vect.end(); ++it)
		std::cout<<" "<<*it;

	std::cout<<"\n";
	return 0;
}
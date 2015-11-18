// Sample code to insert data from array to an unordered map in C++
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main() {
	using namespace std;
	string names[] = {"Saurav", "Biswas", "Saurav", "Laxman", "Dravid", "Sehwag", "Ganguly", "Dravid"};
	vector<string> vect;

	for (auto &it: names) {
		vect.push_back(it);
	}

	for (auto &it: vect) {
		cout<<it<<endl;
	}

	unordered_map<string, int> map;
	vector<string>::iterator it;

	for (it = vect.begin(); it != vect.end(); it++) {
		if (map.find(*it) == map.end())
			map[*it] = 1;
		else
			map[*it] = map[*it] + 1;
	}

	for (auto &it : map) {
		cout<<"Key: "<<it.first <<" || Value :"<<it.second<<endl;
	}

	return 0;
}


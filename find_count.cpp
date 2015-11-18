#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> names = {"saurav", "biswas", "messi", "saurav", "messi", "dimaria"};
	unordered_map<string, int> dict;

	for (auto i: names) {
		
		if (dict.find(i) == dict.end())
			dict[i] = 1;
		else
			dict[i] = dict[i] + 1;
	}

	for(unordered_map<string, int>::iterator it = dict.begin(); it != dict.end(); ++it)  {
		cout<<"Key: "<<it->first<<"|| Value: "<<it->second<<endl;
	}

	cout<<"With auto ptr"<<endl;
	for (auto i: dict) {
		cout<<"Key: "<<i.first<<"|| Val: "<<i.second<<endl;
	}

	return 0;
}
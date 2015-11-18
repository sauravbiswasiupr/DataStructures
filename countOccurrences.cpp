/* Given a string of words from user (input)
 * return the count of each word
 * 
 */

 #include <iostream>
 #include <sstream>
 #include <string>
 #include <unordered_map>
 #include <vector>

 using namespace std;

 unordered_map<string, int> tokenize(vector<string> tokens) {
 	if (tokens.size() == 0)
 		return {};
 	unordered_map<string, int> hashmap;
 	for (auto &it: tokens) {
 		if (hashmap.find(it) == hashmap.end())
 			hashmap[it] = 1;
 		else
 			hashmap[it] = hashmap[it] + 1;
 	}

 	return hashmap;
 }

 int main() {
 	string sentence, token;
 	vector<string>tokens;

 	getline(cin, sentence);
 	stringstream ss(sentence);

 	while (ss >> token) {
 		tokens.push_back(token);
 	}

 	unordered_map<string, int> map = tokenize(tokens);

 	for (auto &it: map) {
 		cout<<"Key: "<<it.first<<" || Value: "<<it.second<<endl;
 	}

 	return 0;
 }

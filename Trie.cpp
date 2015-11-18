#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <set>
#include <memory>

#include "trienode.h"

using namespace std;

int main() {
	TrieNode* root  = new TrieNode();
	root->c = '#';
	root->links = {};
	root->end = false;

	vector<string> words = {"cute", "cat", "catalyst", "catenacious", "catastrophe", "catenaccio"};

	for (auto it: words)
		root = insert(root, it);

	string word = "catastrophe";
	bool found = search(root, word);

	cout<<"Word was: "<<word<<endl;
	cout<<"Found in trie: "<<boolalpha<<found<<endl;

	string newWord = "cat";
	vector<string> results = autocomplete(root, newWord);
    
    cout<<"You entered now: "<<newWord<<endl;
	for (auto it: results) {
		cout<<"Did you mean: "<<it<<endl;
	}

    freeMemory(root);

	return 0;
}
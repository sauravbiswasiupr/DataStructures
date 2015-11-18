#ifndef TRIENODE_H
#define TRIENODE_H

#include <unordered_map>
#include <vector>
#include <string>
#include <set>

using namespace std;

struct TrieNode {
	char c;
	unordered_map<char, TrieNode* >links;
	bool end;
};

TrieNode* insert(TrieNode* root, string word);
bool search(TrieNode* root, string word);
void DFS(TrieNode* node, string s, set<string>* results);
vector<string> autocomplete(TrieNode* root, string word);
void freeMemory(TrieNode* root);

#endif
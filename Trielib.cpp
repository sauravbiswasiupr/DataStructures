#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <set>
#include <memory>

#include "trienode.h"

using namespace std;

TrieNode* insert(TrieNode* root, string word) {
  TrieNode* current  = root;

  for (auto it: word) {
  	if (current->links.find(it) == current->links.end()) {
  		TrieNode* node = new TrieNode(); // possible memory leak if not deleted ?
  		node->c = it;
  		node->links = {};
  		node->end = false;

  		current->links[it] = node;
  	}

  	current = current->links[it];
  }

  current->end = true;
  return root;
};

bool search(TrieNode* root, string word) {
	TrieNode* current = root;

	for (auto it: word) {
		if (current->links.find(it) == current->links.end()) {
			return false;
		}

		current = current->links[it];
	}

	if (current->end == true)
		return true;
	else
		return false;

};

void DFS(TrieNode* node, string s, set<string>*  results) {
  if (node->end == true) {
  	(*results).insert(s);
  }

  for (auto it: node->links) {
  	DFS(it.second, s + it.first, results);
  }
};

vector<string> autocomplete(TrieNode* root, string word) {
  TrieNode* current = root;
  set<string> results;
  vector<string>autocomplete_strings;

  for (auto it: word) {
  	if (current->links.find(it) == current->links.end())
  		return autocomplete_strings;

  	current = current->links[it];
  }

  DFS(current, "", &results);

  for (auto it: results) {
  	autocomplete_strings.push_back(word + it);
  }

  return autocomplete_strings;
};

void freeMemory(TrieNode* root) {
	if (root == NULL)
		return;

    for (auto i: (root)->links) {
		freeMemory((i.second));
	}



	if (root != NULL)
		delete (root);

	return;
};
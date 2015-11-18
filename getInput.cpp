// Simple C++ code to get input from stdin and push the results to a vector 
#include<iostream>
#include<sstream>
#include<vector>
#include<string>

int main() {
	std::string sentence = "This is a test string separated by     whitespaces";
	std::vector<std::string> tokens;
	std::string token;
	std::stringstream ss (sentence);

	while (ss >> token) {
		tokens.push_back(token);
	}

	std::vector<std::string>::iterator it;

	for (it = tokens.begin(); it != tokens.end(); it++) {
		std::cout<<"Token is: "<<*it<<std::endl;
	}

	return 0;
}
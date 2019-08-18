//Objetivo: Escrever um programa que conta quantas palavras distintas aparecem em um input
//Ou seja, if appear a equal its don't count.
#include <iostream>
#include <string>
#include <vector>

using std::string;			using std::cin;
using std::cout;			using std::endl;
using std::vector;

int main () {
	vector<string> words;
	string word;
	int countWords = 0;
	
	cout << "Type a word: " << endl;
	
	int times = 0;
	while (times != 4) {
		cin >> word;
		words.push_back(word);
		++times;
	}
	cout << words.size() << endl;
	vector<string>::size_type wordsSize = words.size();
	vector<string>::size_type count = 0;
	string::size_type checkWord = 0;	
		
	while (count != wordsSize) {
		int checkPast = count;
		checkWord = 0;
		
		bool alreadExist = false;
		while (checkPast >= 0) {
			cout << "Entrou" << endl;
			if (words[count] == words[checkPast] && count != checkPast) {
				--checkPast;
				alreadExist = true;
			} else --checkPast;
			cout << "Saiu" << endl;	
		}
		if (!alreadExist) {
			++countWords;
			/*while (checkWord != words.size()) {
				if (words[count] == words[checkWord] && count != checkWord) {
					cout << words[count]<< "--" << count << "  " << words[checkWord] << "--" << checkWord << endl;
					++countWords;
				}
				++checkWord;
			}*/
			alreadExist = false;
		}
		++count;	
	}	
	cout << countWords << " words are distinct." << endl;
	return 0;
}

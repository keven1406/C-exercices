#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;		using std::cin;
using std::string;		using std::vector;
using std::endl;

int main () {
	string word;
	string::size_type longestSize = 0;
	string::size_type shortedSize = 0;
	
	int count = 0;
	while (count != 10) {
		cin >> word;
		if (word.size() > longestSize) longestSize = word.size();
		
		if (shortedSize == 0) {
			shortedSize = word.size();
		} else if (word.size() < shortedSize) 
			shortedSize = word.size();
		++count;
	}
	
	cout << "Smaller string is " << shortedSize
		 << " and the longest string is " << longestSize << endl;
	return 0;
}

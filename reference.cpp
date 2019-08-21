#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

string modifierText(string& wolf) {
	if (wolf == "")
		throw domain_error("this not contain a wolf");
	wolf = "The wolf ate a habbit";
	return wolf;
}

int main () {
	string wolf = "is wolf hungly";
	cout << modifierText(wolf) << endl;
	cout << wolf << endl;
	
	return 0;
}

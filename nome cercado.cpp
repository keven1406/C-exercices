#include <iostream>
#include <string>

using namespace std;

int main () {	
	cout << "Qual é seu nome?";
	string name;
	cin >> name;
	
	string greeting = "Welcome, " + name;
	
	int pad = 20;
	
	string::size_type rows = pad * 2 + 3;
	string::size_type cols = greeting.size() + pad * 2 + 2;
	
	for (int row = 0; row != rows; ++row) {
		cout << endl;
		
		string::size_type col = 0;
		
		while (col != cols) {
			if (row == pad + 1 && col == pad + 1) {
				cout << greeting;
				col += greeting.size() - 1;
			} else {
				if (row == 0 || row == rows - 1 || col == 0 || col == cols - 1)
					cout << "*";
				else
					cout << " ";
			}
			++col;
		}
	}
	system("pause");
	return 0;
}

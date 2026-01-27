#include <iostream>
#include <string>

using namespace std;

int main() {
	string A;
	int word = 0;
	getline(cin,A);
	bool inword = false;

	for (char c : A) {
		if (c != ' ') {
			if (!inword) {
				word++;
				inword = true;
			}
		}
		else inword = false;
	}
	cout << word;
	return 0;
}
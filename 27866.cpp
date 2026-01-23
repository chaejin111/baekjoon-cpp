#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	string S;
	int i;
	getline(cin,S);
	cin >> i;
	i--;
	cout << S.at(i);

	return 0;
}
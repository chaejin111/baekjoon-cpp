#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	string Line;
	getline(cin,Line);
	int T = stoi(Line);
	for(int idx = 0; idx<T; idx++){
		string S;
		getline(cin, S);
		cout << S[0] << S[S.size() - 1] << "\n";
	}
	return 0;
}
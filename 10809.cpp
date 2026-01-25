#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	string S;
	int AlphabetS[26];
	cin >> S;
	fill(AlphabetS, AlphabetS+26,-1);
	for (int i = 0; i < S.length(); i++) {
		int a = S[i] - 'a';
		if(AlphabetS[a] == -1)
		{
		AlphabetS[a] = i;
		}

	}
	for (int i = 0; i < 26; i++) {
		cout << AlphabetS[i] << " ";
	}
}
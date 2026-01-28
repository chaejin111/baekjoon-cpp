#include <iostream>
#include <string>

using namespace std;

int main() {
	int wordcount[26] = {0};
	int question = 0,MaxIdx = 0;
	string word;
	cin >> word;
	for (char c : word) {
		if('a' <=c && c <= 'z') wordcount[c-'a']++;
		else wordcount[c-'A']++;
	}
	int maxcount = wordcount[0];
	for (int i = 1; i < 26; i++) {
		if (maxcount >= wordcount[i]) {
			maxcount = maxcount;
		}
		else {
		maxcount = wordcount[i];
		MaxIdx = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (maxcount == wordcount[i]) {
			question++;
		}
	}
	if (question > 1) {
		cout << "?";
	}
	else cout << char('A'+MaxIdx);
	return 0;
}
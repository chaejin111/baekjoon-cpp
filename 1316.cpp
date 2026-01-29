#include <iostream>
#include <string>

using namespace std;

int main() {
	int N, count = 0;
	cin >> N;

	while (N--) {
		string S;
		cin >> S;

		bool used[26] = {false};
		bool isgroup = true;
		for (int i = 0; i < S.length(); i++) {
			if (i > 0 && S[i] != S[i - 1]) {
				if (used[S[i] - 'a']) {
					isgroup = false;
					break;
				}
			}
			used[S[i]-'a'] = true;
		}
		if(isgroup){count++;}
	}
	cout << count;
	return 0;
}
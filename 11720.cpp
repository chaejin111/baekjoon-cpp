#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int N,sumN = 0;
	string s;
	cin >> N;
	cin >> s;

	for (int idx = 0; idx < N; idx++) {
		sumN += s[idx] - '0';
	}
	cout << sumN;
	return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
	string N;
	int B;
	cin >> N >> B;
	long long ans = 0;
	for (char c : N) {
		int n ;
		if (c >= '0' && c <= '9') {
			n = c - '0';
		}
		else {
			n = c - 'A' + 10;
		}
		ans = ans * B + n;
	}
	cout << ans;
}
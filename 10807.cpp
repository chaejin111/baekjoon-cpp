#include <iostream>

using namespace std;

int main() {
	int n[100];
	int T,q,a = 0;
	cin >> T;
	if (T > 100) {
		return 0;
	}
	for (int i = 0; i < T; i++) {
		cin >> n[i];
	}
	cin >> q;
	for (int i = 0; i < T; i++) {
		if (n[i] == q) {
			a++;
		}
	}
	cout << a;
	return 0;

}
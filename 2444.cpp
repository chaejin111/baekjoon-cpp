#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < (2 * N) - 1; i++) {
		int space = (i < N) ? (N-1-i) : (i - (N - 1));
		int stars = (i<N) ? (2*i+1): (2 * (2 * N - 2 - i) + 1);
		for (int s = 0; s < space; s++) cout << ' ';
		for (int k = 0; k < stars; k++)  cout << '*';
		cout << '\n';
	}
	return 0;
}
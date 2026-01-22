#include <iostream>

using namespace std;

int main() {
	int x,N,Max_x,Min_x;
	cin >> N;
	cin >> x;
	Max_x = x;
	Min_x = x;
	for (int i = 1; i < N; i++) {
		cin >> x;
		if (Max_x < x) {
			Max_x = x;
		}
		if (Min_x > x) {
			Min_x = x;
		}
	}
	cout << Min_x << " " << Max_x;
	return 0;
}
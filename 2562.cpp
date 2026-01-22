#include <iostream>

using namespace std;

int main() {
	int N[9];
	for (int i = 0; i < 9; i++) {
		cin >> N[i];
	}
	int Max_count = 1;
	int Max_N = N[0];
	for (int i = 1; i < 9; i++) {
		if (Max_N < N[i]) {
			Max_N = N[i];
			Max_count = i+1;
		}
	}
	cout << Max_N << " " << Max_count;


	return 0;
}
#include <iostream>

using namespace std;

int main() {
	int N,blank;
	cin >> N;
	blank = N-1;
	for (int i = 0; i < N; i++) {
		for (int i2 = 0; i2 < blank; i2++) {
			cout << " ";
		}
		for (int i3 = 0; i3 < N - blank; i3++) {
			cout << "*";
		}
		blank--;
		cout << "\n";
	}
	return 0;
	
}
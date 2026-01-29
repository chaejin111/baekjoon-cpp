#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	int z[41],o[41];
	z[0] = 1,z[1] = 0;
	o[0] = 0;o[1] = 1;
	for (int i = 2; i < 41; i++) {
		z[i] = z[i-1] + z[i-2];
		o[i] = o[i-1] + o[i-2];
	}
	while (N--) {
		int fibo;
		cin >> fibo;
		cout << z[fibo] << " " << o[fibo] << "\n";
	}
	return 0;
}
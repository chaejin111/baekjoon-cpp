#include <iostream>

using namespace std;

int main() {
	int a,M,i,j,k;
	cin >> a >> M;
	int N[100];
	for (int q = 0; q < 100; q++) {
		N[q] = 0;
	}
	for (int q = 0; q < M; q++) {
		cin >> i >> j >> k;
		i = i-1;
		for (int qi = i; qi < j; qi++) {
			N[qi] = k;
		}
	}
	for (int q = 0; q < a; q++) {
		cout << N[q] << " ";
	}
	return 0;
	
}
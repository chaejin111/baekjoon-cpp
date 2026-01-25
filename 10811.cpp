#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int N,M = 0;
	cin >> N >> M;
	int A[101];
	for (int i = 0; i <= N; i++) {
		A[i] = i;
	}
	for (int idx = 0; idx < M; idx++) {
		int i,j;
		cin >> i >> j;
		while (i < j) {
			int changen = A[i];
			A[i] = A[j];
			A[j] = changen;
			i++;
			j--;
		}
	}
     for (int idx = 1; idx <= N; idx++) {
		 cout << A[idx] << " ";
	}
	return 0;
}
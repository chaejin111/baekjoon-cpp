#include <iostream>
#include <string>

using namespace std;

int main() {
	int max = 1,layer = 1,N;
	cin >> N;
	while (N > max) {
		max += 6*layer;
		layer++;
	}
	cout << layer;
	return 0;
}
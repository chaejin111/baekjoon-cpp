#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	bool white[100][100] = {false};
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int width,height;
		cin >> width >> height;
		for (int j = width; j < width + 10; j++) {
			for (int q = height; q < height + 10; q++) {
				white[j][q] = true;
			}
		}
	}
	int extent = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (white[i][j]) {
				extent++;
			}
		}
	}
	cout << extent;
	return 0;
}
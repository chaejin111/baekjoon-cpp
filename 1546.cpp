#include <iostream>

using namespace std;

int main() {
	int N;
	double avg[1000];
	cin >> N;
	for (int i = 0; i < N; i++) {
		int score;
		cin >> score;
		avg[i] = score;
	}
	double maxscore = avg[0];
	for (int i = 1; i < N; i++) {
		if (maxscore < avg[i]) {
			maxscore = avg[i];
		}
	}
	for (int i = 0; i < N; i++) {
		avg[i] = (avg[i]/maxscore)*100;
	}
	double sumscore = 0;
	for (int i = 0; i < N; i++) {
		sumscore += avg[i];
	}
	cout << sumscore/N;
	return 0;
}
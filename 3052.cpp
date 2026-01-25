#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int mod[10];
	int arr[42] = {0};
	int a = 0;
	for (int i = 0; i < 10; i++) {
		int n;
		cin >> n;
		mod[i] = n % 42;
	}
	for (int i = 0; i < 10; i++) {
		arr[mod[i]] = 1;
	}
	for (int i = 0; i < 42; i++) {
		if (arr[i] == 1) {
			a++;
		}
	}
	cout << a;
	return 0;
}
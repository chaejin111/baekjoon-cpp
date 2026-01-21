#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	for(int line = 1;line <= T;line++){
	for (int i = 0; i < line; i++) {
		cout << "*";
	 }
	 cout << "\n";
	}
	
	return 0;
}
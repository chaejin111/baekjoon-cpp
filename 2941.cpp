#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int count = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'c' && i + 1 < (int)s.size() && s[i + 1] == '=' || s[i + 1] == '-') {
			count++;
			i++;;
		}
		else if (s[i] == 'd') {
			if (s[i + 1] == '-' && i + 1 < (int)s.size()) {
				count++;
				i++;
			}
			if(s[i+1] == 'z' && s[i + 2] == '=' && i + 2 < (int)s.size()){
				count++;
				i += 2;
			}
			else count++;
		}
		else if ((s[i] == 'n' || s[i] == 'l') && i + 1 < (int)s.size() && s[i + 1] == 'j') {
			count++;
			i++;
		}
		else if ((s[i] == 's' || s[i] == 'z') && i + 1 < (int)s.size() && s[i + 1] == '=') {
			count++;
			i++;
		}
		else count++;
	}
	cout << count;
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

void changescore(float& a,string s) {
	if (s == "P")  a = 10.0f; 
	else if (s == "A+") a = 4.5f;
	else if (s == "A0") a = 4.0f;
	else if (s == "B+") a = 3.5f;
	else if (s == "B0") a = 3.0f;
	else if (s == "C+") a = 2.5f;
	else if (s == "C0") a = 2.0f;
	else if (s == "D+") a = 1.5f;
	else if (s == "D0") a = 1.0f;
	else if (s == "F")  a = 0.0f;
}

int main() {
	string point;
	float score[20], sumscore = 0,subjectpoint[20] = {0}, sps = 0;
	for (int i = 0; i < 20; i++) {
		string subject;
		cin >> subject >> score[i] >> point;
		changescore(subjectpoint[i],point);
		if(point != "P") { sumscore += score[i]; }
	}
	for (int i = 0; i < 20; i++) {
		if (subjectpoint[i] != 10.0f) {
			sps = sps+(subjectpoint[i] * score[i]);
		}
	}
	cout << sps/sumscore;
	return 0;
}
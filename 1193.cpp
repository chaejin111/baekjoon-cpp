#include <iostream>
#include <string>

using namespace std;

int main() {
	int sum = 0, k =1,nr,dm,n;
	cin >> n;
	while (n > sum) {
		sum +=k; // sum은 총 분수의 개수
		k++; // 대각선의 번호
	}
	int diag = k-1; // k가 마지막에 ++ 되기때문에 진짜 대각선 번호
	int prev = sum - diag; // 내가 구하려는 대각선을 제외한 나머지 분수들의 개수
	int pos = n-prev; // 전체 분수의 개수에서 대각선을 제외한 분수들의 개수를 뺀 나머지
	if (diag % 2 == 0) { 
		nr = pos;
		dm = diag - pos + 1;
	}
	else {
		nr = diag - pos + 1;
		dm = pos;
	}
	cout << nr << "/" << dm;
}
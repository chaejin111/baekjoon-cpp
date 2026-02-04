#include <iostream>
#include <vector>
using namespace std;


int main()
{
    while (true) {
        int N,sum = 0;
        vector<int> measure;
        cin >> N;
        if (N == -1) {
            break;
        }
        for (int i = 1; i < N; i++) {
            if (N % i == 0) {
                measure.push_back(i);
                sum += i;
            }
        }
        if (sum == N) {
            cout << N << " = ";
            for (int i = 0; i < measure.size(); i++) {
                if (i == measure.size() - 1) {
                    cout << measure[i] << '\n';
                }
                else {cout << measure[i] << " + ";}
            }
        }
        else {cout << N << " is NOT perfect." << '\n'; }
    }
    return 0;
}

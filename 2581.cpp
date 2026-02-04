#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int N,M,min = 0,sum = 0;
    cin >> N >> M;
    for (int i = N; i <= M; i++) {
        bool ismeasure = true;
        if (i < 2) {
            continue;
        }
        for (int idx = 2; idx*idx <= i; idx++) {
            if (i % idx == 0) {
                ismeasure = false;
                break;
            }
        }
        if (ismeasure) {
            if (min == 0) {
                min = i;
            }
            sum +=i;
        }
    }
    if(min == 0){cout << -1;}
    else cout << sum << '\n' << min;
    return 0;
}

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    string s;

    cin >> N >> K;
    cin >> s;

    for (int i = K; i < N; i += 2 * K) {
        int start = i;
        int end = min(i + K, N) - 1;

        reverse(s.begin() + start, s.begin() + end + 1);
    }

    cout << s;

    return 0;
}

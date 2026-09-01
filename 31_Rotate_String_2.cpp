#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, K;
    string s;

    cin >> N >> K;
    cin >> s;

    K %= N;

    string result = s.substr(N - K) + s.substr(0, N - K);

    cout << result;

    return 0;
}

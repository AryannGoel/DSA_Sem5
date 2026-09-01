#include <iostream>
using namespace std;

int main() {
    long long N, X;
    cin >> N >> X;

    long long bill = N * X;

    if (bill >= 10000 && bill <= 99999)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

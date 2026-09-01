#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int odd = 0, even = 0;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;

        if (x % 2 == 0)
            even++;
        else
            odd++;
    }

    if (odd > even)
        cout << "Odd";
    else if (even > odd)
        cout << "Even";
    else
        cout << "Tie";

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);

    for (int i = 0; i < N; i++)
        cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());

    int sum = 0;

    for (int i = 0; i < 5; i++)
        sum += a[i];

    cout << sum << endl;

    for (int i = N - 5; i < N; i++) {
        cout << a[i];
        if (i != N - 1)
            cout << " ";
    }

    return 0;
}

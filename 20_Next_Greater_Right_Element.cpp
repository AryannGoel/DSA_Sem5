#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);

    for (int i = 0; i < N; i++)
        cin >> a[i];

    for (int i = 0; i < N; i++) {
        int ans = 0;

        for (int j = i + 1; j < N; j++) {
            if (a[j] > a[i]) {
                ans = a[j];
                break;
            }
        }

        cout << ans;

        if (i != N - 1)
            cout << " ";
    }

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> a(N, vector<int>(M));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> a[i][j];

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < M - 1; j++) {
            swap(a[i][j], a[i + 1][j + 1]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << a[i][j];
            if (j != M - 1)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<int>> a(N, vector<int>(M));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> a[i][j];

    for (int i = 0; i < N / 2; i++) {
        int opposite = N - 1 - i;

        for (int j = 0; j < K; j++) {
            swap(a[i][M - K + j], a[opposite][j]);
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

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    vector<vector<int>> mat(N, vector<int>(M));

    for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
        cin >> mat[i][j];
    }
}


for(int i = 0; i < N / 2; i++) {
    for(int j = 0; j < K; j++) {
        
        swap(mat[i][M - K + j], mat[N - 1 - i][j]);
    }
}

for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
        cout << mat[i][j] << " ";
    }
    cout << endl;
}

return 0;
}

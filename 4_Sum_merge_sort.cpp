#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int N;
    cin>>N;
    vector<int> A1(N);
    vector<int> A2(N);
    for (int i = 0; i < N; i++) {
        cin >> A1[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> A2[i];
    }
    A1.insert(A1.end(), A2.begin(), A2.end());
    sort(A1.begin(),A1.end());
    
    int a1 = A1[N-1];
    int a2 = A1[N];
    int sum = a1 + a2;
    
    cout << sum;
}

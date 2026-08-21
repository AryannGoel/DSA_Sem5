#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string Str1;
    int N = Str1.size();
    int K;
    cin>>N>>K;
    cin>>Str1;
    int K1=K%N;
    string Str2 = Str1.substr( K1,N-K1) + Str1.substr(0,K1);
    
    cout<<Str2;
    return 0;
}

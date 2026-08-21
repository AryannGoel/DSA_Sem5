#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string Str1;
    string Str2;
    getline(cin, Str1);
    getline(cin, Str2);
    int m = Str1.size();
    int N;
    cin>>N;
    for(int i= m - 1;i >= 1 ;i --){
        if(i % N==0){
            Str1.insert(i , Str2);
        }
    }
    cout<< Str1;
    return 0;
    
}

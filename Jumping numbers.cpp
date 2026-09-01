#include <bits/stdc++.h>
using namespace std;

int main() {
    int X;
    int i = 0;
    cin >> X;
    
    while (i <= X) {
        int dig2 = i / 10;
        int dig1 = i % 10;
        
        if (i < 10) {
            cout << i << " ";
        } 
        else if ((dig1 - dig2) == 1 || (dig2 - dig1) == 1) {
            cout << i << " ";
        }
        
        i++;
    }
    
    return 0;
}
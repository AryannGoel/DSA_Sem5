#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool hasAmpersand = false;
    bool hasHash = false;

    for (char c : s) {
        if (c == '&')
            hasAmpersand = true;
        if (c == '#')
            hasHash = true;
    }

    if (hasAmpersand && hasHash && s.length() % 2 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

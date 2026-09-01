#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    int N;

    cin >> s1;
    cin >> s2;
    cin >> N;

    string result = "";

    for (int i = 0; i < (int)s1.length(); i++) {
        result += s1[i];

        if ((i + 1) % N == 0 && i != (int)s1.length() - 1)
            result += s2;
    }

    cout << result;

    return 0;
}

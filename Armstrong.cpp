#include <iostream>.
using namespace std;
int main() {
    int lower, upper;
    cin >> lower >> upper;
    bool found = false;
    for (int i = lower; i <= upper; ++i) {
        int temp = i;
        int n = 0;
        while (temp > 0) {
            temp /= 10;
            n++;
        }
        temp = i;
        int total_sum = 0;
        while (temp > 0) {
            int digit = temp % 10;
            int power = 1;
            for (int j = 0; j < n; ++j) {
                power *= digit;
            }
            total_sum += power;
            temp /= 10;
        }
        if (total_sum == i) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) {
        cout << -1;
    }
    return 0;
}
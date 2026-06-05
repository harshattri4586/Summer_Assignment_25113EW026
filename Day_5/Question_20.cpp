#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int ans = -1;

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            if (is_prime(i)) {
                ans = i;
            }
        }
    }

    cout << "The largest prime factor of the number is: " << ans << endl;

    return 0;
}
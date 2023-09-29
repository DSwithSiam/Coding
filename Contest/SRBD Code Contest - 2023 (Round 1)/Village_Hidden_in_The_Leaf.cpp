#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> houses(n);
        for (int i = 0; i < n; i++) {
            cin >> houses[i];
        }

        for (int i = 0; i < q; i++) {
            int type, x;
            cin >> type >> x;

            if (type == 1) {
                int count = 0;
                if (x > 1 && !isPrime(houses[x - 2])) count++;
                if (x < n && !isPrime(houses[x])) count++;
                cout << count << endl;
            } else if (type == 2) {
                houses[x - 1] = 1; // Set the house holding number to 1
            }
        }
    }

    return 0;
}

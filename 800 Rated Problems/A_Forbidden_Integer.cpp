// Time Complexity - O(n)
// Spcae Complexity - O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long n, k, x; cin >> n >> k >> x;

        if (x != 1) {
            cout << "YES\n" << n << "\n";
            for(int i = 0; i < n; i++) cout << "1 ";
            cout << "\n";
        }
        else {
            if (k == 1 || (k == 2 && n % 2)) cout << "NO\n";
            else {
                cout << "YES\n";
                int cnt = n / 2;
                if (n % 2) {
                    cout << cnt << "\n";
                    for(int i = 0; i < cnt - 1; i++) cout << "2 ";
                    cout << "3\n";
                }
                else {
                    cout << cnt << "\n";
                    for(int i = 0; i < cnt; i++) cout << "2 ";
                    cout << "\n";
                }
            }
        }
    }
}

// Time Complexity - O(1)
// Space Complexity - O(1)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--) {

        long long n;
        cin>>n;

        int k = n / 2020;

        if(n - 2020 * k <= k) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}

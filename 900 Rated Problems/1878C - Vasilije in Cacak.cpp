// Time Complexity - O(1)
// Space Complexity - O(1)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--) {

    long long n,k,x;
    cin>>n>>k>>x;

    // Minimum possible sum = k * (n + 1) / 2;
    // Maximum possible sum = k * (2n - k + 1) / 2;


    long long min_possible_sum = k * (k + 1) / 2;
    long long max_possible_sum = k * (2 * n - k + 1) / 2;

    if(x >= min_possible_sum && x <= max_possible_sum) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    }
}

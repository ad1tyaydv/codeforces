// Time Complexity - O(n)
// Space Complexity - O(1)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    string s;
    cin>>s;

    int one_count = 0, zero_count = 0;
    for(int i=0;i<n;i++) {
        if(s[i] == '0') {
            zero_count++;
        } else {
            one_count++;
        }
    }

    cout<<n - (2 * min(zero_count, one_count));
}

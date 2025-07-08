// Time Complexity - O(n)
// Space Complexity - O(1)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--) {

        long long a,b,n;
        cin>>a>>b>>n;

        long long result = b;
        for(int i=0;i<n;i++) {
            long long x;
            cin>>x;
            result += min(a - 1, x);
        }

        cout<<result<<endl;
    }
}

// Time Complexity - O(n)
// Space Complexity - O(n)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--) {

        int x,k;
        cin>>x>>k;

        if(x % k == 0) {  // even
            cout<<2<<endl;
            cout<<1<<" "<<x - 1<<endl;
        }
        else {  // odd
            cout<<1<<endl;
            cout<<x<<endl;
        }
    }
}

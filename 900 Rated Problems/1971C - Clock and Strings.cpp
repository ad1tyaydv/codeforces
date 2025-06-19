// Time Complexity - O(n)
// Space Complexity - O(1)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool is_between(int x, int y, int z) {
    
    while(x != y) {
        x = x % 12 + 1;
        if(x == z) {
            return true;
        }
    }

    return false;
}

int main() {
    int tt;
    cin>>tt;
    while(tt--) {

       int a,b,c,d;
       cin>>a>>b>>c>>d;

        bool inside_c = is_between(a, b, c);
        bool inside_d = is_between(a, b, d);

        if(inside_c != inside_d) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}

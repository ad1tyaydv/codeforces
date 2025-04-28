// Time Complexity - O(1)
// Space Complexity - O(1)


#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--) {

        long long a,b,c;
        cin>>a>>b>>c;

        if(a == b) {
            if(c % 2 == 0) {
                cout<<"Second"<<endl;
            }
            else {
                cout<<"First"<<endl;
            }
        }
        else if(a > b) {
            cout<<"First"<<endl;
        }
        else {
            cout<<"Second"<<endl;
        }
    }
}

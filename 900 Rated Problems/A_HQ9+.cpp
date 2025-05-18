// Time Complexity - O(n)
// Space Complexity - O(1)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;

    bool check = false;
    for(int i=0;i<s.size();i++) {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
            check = true;
            break;
        }
    }

    if(check) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}

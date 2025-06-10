// Time Complexity - O(n)
// Space Complexity - O!1)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin>>s;


    string result = "";
    bool flag = true;
    for(int i=0;i<s.size();i++) {
        if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')  {
            i+=2;

            if(!flag) {
                cout<<" ";
            }
            continue;
        }
        else {
            flag =false;
            cout<<s[i];
        }
    }
    return 0;
}

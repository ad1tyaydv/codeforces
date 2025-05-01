// Time Complexity - O(n)
// Space Complexity - O(1)

#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--) {

        int n;
        string s;
        cin>>n;
        cin>>s;

        int i = 0;
        int j = n - 1;
        int result = n;
        while(i < j) {
            if(s[i] == '0' && s[j] == '1' || s[i] == '1' && s[j] == '0') {
                result -= 2;
                i++;
                j--;
            }
            else {
                break;
            }
        }

        cout<<result<<endl;
    }
}

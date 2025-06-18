// Time Complexity - O(n)
// Space Complexity - O(1)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--) {

        int n,a,b;
        cin>>n>>a>>b;

        string pattern = "";
        for(int i=0;i<a;i++) {
            pattern += char('a' + (i % b));
        }

        string result = "";
        for(int i=0;i<n;i++) {
            result += pattern[i % a];
        }

        cout<<result<<endl;
    }
}

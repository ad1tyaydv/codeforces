// Time Complexity - O(n)
// Space Complexity - O(n)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin>>n;
    
    string s;
    cin>>s;

    map<string, int> freq;
    for(int i=0;i<n-1;i++) {
        string str = s.substr(i, 2);
        freq[str]++;
    }

    int max_freq = 0;
    string result;
    for(auto &pair : freq) {
        if(pair.second > max_freq) {
            max_freq = pair.second;
            result = pair.first;
        }
    }

    cout<<result;
}

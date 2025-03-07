#include <cctype>
#include <iostream>
#include <type_traits>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const string correct = "Timur";

int main() {
    int tt;
    cin>>tt;
    while(tt--) {

        int n;
        cin>>n;
        string s;
        cin>>s;

        sort(s.begin(), s.end());
        string sorted_correct = correct;
        sort(sorted_correct.begin(), sorted_correct.end());

        if(s == sorted_correct) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}

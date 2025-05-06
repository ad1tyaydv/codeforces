#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> round;
    for(int power=1;power<=100000;power*=10) {
        for(int i=1;i<=9;i++) {
            round.push_back(power * i);
        }
    }

    int tt;
    cin>>tt;
    while(tt--) {

        int n;
        cin>>n;

        int count = 0;
        for(int num : round) {
            if(num <= n) {
                count++;
            }
            else {
                break;
            }
        }

        cout<<count<<endl;
    }
}

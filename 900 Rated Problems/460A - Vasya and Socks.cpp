// Time Complexity - O(n)
// Space Complexity - O(1)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,m;
    cin>>n>>m;
    
    int socks = n;
    int days = 0;

    while(socks > 0) {
        days++;
        socks--;

        if(days % m == 0) {
            socks++;
        }
    }

    cout<<days<<endl;
}

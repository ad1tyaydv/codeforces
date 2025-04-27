// Time Complexity - O(n)
// Space Compexity - O(1)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin>>n;

    int num;
    int mini = INT_MAX;

    for(int i=0;i<n;i++) {
        cin>>num;

        mini = min(mini, abs(num));
    }

    cout<<mini<<endl;
}

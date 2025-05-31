// Time Complexity - O(n);
// Space Complexity - O(1);
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    sort(begin(arr), end(arr));

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}

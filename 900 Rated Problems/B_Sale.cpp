// Time Comoplexity - O(nlogn)
// Space Complexity - O(1)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,m;
    cin>>n>>m;

    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    int result = 0;
    int i = 0;
    while(arr[i] < 0 && i < m && i < n) {
        result += abs(arr[i]);
        i++;
    }
    
    cout<<result;
}

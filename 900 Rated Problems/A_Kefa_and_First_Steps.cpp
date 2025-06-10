// Time Complexity - O(n)
// Space Complexity - O(1)

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

    if(n == 1) {
        cout<<1;
        return 0;
    }

    int maxCount = 1;
    int count = 1;
    int second = 1;
    while(second < n) {
        if(arr[second] >= arr[second - 1]) {
            count++;
        }
        else {            
            count = 1;
        }
        second++;
        maxCount = max(maxCount, count);
    }

    cout<<maxCount;
}

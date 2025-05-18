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

    // sort(begin(arr), end(arr), greater<int>());
    sort(arr.rbegin(), arr.rend());

    int total_sum = 0;
    for(int num: arr) {
        total_sum += num;
    }

    int count = 0;
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
        count++;
        total_sum -= arr[i];

        if(sum > total_sum) {
            break;
        }
    }

    cout<<count<<endl;
}

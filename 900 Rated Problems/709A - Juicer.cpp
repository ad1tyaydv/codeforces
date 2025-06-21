// Time Complexity - O(n)
// Space Complexity - O(1)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,b,d;
    cin>>n>>b>>d;

    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    
    int result = 0;
    int sum = 0;
    for(int i=0;i<n;i++) {
        if(arr[i] <= b) {
            sum += arr[i];
        }

        if(sum > d) {
            sum = 0;
            result++;
        }
    }

    cout<<result;
}

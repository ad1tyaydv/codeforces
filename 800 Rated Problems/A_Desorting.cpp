// Time Complexity - O(n)
// Space Complexity - O(n)

#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--) {

       long long n;
       cin>>n;

       long long arr[n];
       for(int i=0;i<n;i++) {
        cin>>arr[i];
       }

       long long operations = INT_MAX;
       for(int i=0;i<n-1;i++) {
        if(arr[i] <= arr[i + 1]) {
            long long diff = arr[i + 1] - arr[i];
            long long req_operations = diff / 2 + 1;
            operations = min(operations, req_operations);
        }
        else {
            operations = 0;
        }
       }

       cout<<operations<<endl;
    }
}

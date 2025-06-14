// Time Complexity - O(1)
// Spcae Complexity - O(1)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;

    vector<int> arr(12);
    for(int i=0;i<12;i++) {
        cin>>arr[i];
    }

    if(n == 0) {
        cout<<0;
        return 0;
    }

    sort(arr.begin(), arr.end());

    int count = 0;
    int sum = 0;
    bool check = false;
    for(int i=11;i>=0;i--) {
        sum += arr[i];
        count++;

        if(sum >= n) {
            check = true;
            break;
        }
    }

    if(check) {
        cout<<count;
    } else {
        cout<<-1;
    }
}

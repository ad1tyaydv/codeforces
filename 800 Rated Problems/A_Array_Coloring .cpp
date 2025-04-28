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

       int n;
       cin>>n;

       vector<int> arr(n);
       for(int i=0;i<n;i++) {
        cin>>arr[i];
       }

       long long total_sum = 0;
       for(int i=0;i<n;i++) {
        total_sum += arr[i];
       }

       bool check = false;
       int left_sum = 0;
       for(int i=0;i<n;i++) {
        left_sum += arr[i];
        total_sum -= arr[i];

        if(left_sum % 2 == 0 && total_sum % 2 == 0 ||
           left_sum % 2 != 0 && total_sum % 2 != 0) {
            
            check = true;
            break;
           }
       }

      cout<<(check ? "YES" : "NO")<<endl;
    }
}

// Time Complexity - O(n)
// Space Complexity - O(n)

#include <iostream>
#include <bits/stdc++.h>

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

        int plus_one = 0;
        int minus_one = 0;
        for(int i=0;i<n;i++) {
            if(arr[i] == 1) {
                plus_one++;
            }
            else {
                minus_one++;
            }
        }

        int result = 0;
        int i = 0;
        while(minus_one > plus_one || minus_one % 2 == 1) {
            result++;
            plus_one++;
            minus_one--;
        }

        cout<<result<<endl;
    }
}

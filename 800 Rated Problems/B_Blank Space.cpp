// Time Complexity - O(n)
// Space Complexity - O(1)

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

            int count = 0;
            int result = 0;

            for(int i=0;i<n;i++) {
                if(arr[i] == 0) {
                    count++;
                    result = max(result, count);
                }
                else {
                    count = 0;
                }
            }

            cout<<result<<endl;
    }
}

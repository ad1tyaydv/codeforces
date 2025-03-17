#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int tt;
    cin>>tt;
    while(tt--) {

        int n,k;
        cin>>n>>k;

        vector<int> arr(n);
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }

        vector<int> copy = arr;
        sort(copy.begin(), copy.end());

        if(copy == arr || k > 1) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}

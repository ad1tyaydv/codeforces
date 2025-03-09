#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool sorted(vector<int> &arr) {

    for(int i=1;i<arr.size();i++) {
        if(arr[i] < arr[i - 1]) {
            return false;
        }
    }

    return true;
}

bool cansort(vector<int> &arr) {
    bool changed = true;

    while(changed) {
        changed = false;

        for(int i=1;i<arr.size()-1;i++) {
            if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                changed = true;
            }
        }

        if(sorted(arr)) {
            return true;
        }
    }

    return sorted(arr);
}

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

        if(cansort(arr)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}

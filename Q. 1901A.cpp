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
        int prev=0,ans=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            ans = max(ans,a-prev);
            prev=a;
        }
        ans = max(ans,2*(k-prev));
        cout<<ans<<endl;
    }
}

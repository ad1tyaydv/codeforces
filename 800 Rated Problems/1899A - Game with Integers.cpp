#include <algorithm>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--) {

        int n;
        cin>>n;

        if((n + 1) % 3 == 0 || (n - 1) % 3 == 0) {
            cout<<"First"<<endl;
        }
        else {
            cout<<"Second"<<endl;
        }
    }
}

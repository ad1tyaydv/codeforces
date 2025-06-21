// Time Complexity - O(n)
// Space Complexity - O(n)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin>>n;

    vector<int> primecount(n + 1, 0);

    for(int i=02;i<=n;i++) {
        if(primecount[i] == 0) {
            for(int j=i;j<=n;j+=i) {
                primecount[j]++;
            }
        }
    }


    int result = 0;
    for(int i=2;i<=n;i++) {
        if(primecount[i] == 2) {
            result++;
        }
    }

    cout<<result;
}

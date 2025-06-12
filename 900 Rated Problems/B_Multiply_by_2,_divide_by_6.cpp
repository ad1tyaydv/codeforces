// Time Complexity - O(n)
// Space Complexity - O(1)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--) {

        long long n;
        cin>>n;

        int count_2 = 0, count_3 = 0;

        while(n % 2 == 0) {
            n /= 2;
            count_2++;
        }

        while(n % 3 == 0) {
            n /= 3;
            count_3++;
        }

        if(n != 1 || count_2 > count_3) {
            cout<<-1<<endl;
        } else {
            cout<< 2 * count_3 - count_2<<endl;
        }
    }
}

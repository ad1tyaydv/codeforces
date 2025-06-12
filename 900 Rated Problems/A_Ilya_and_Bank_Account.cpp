// Space Complexity - O(1)
// Time Complexity - O(1)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;

    if(n >= 0) {
        cout<<n;
    } else {
        int option = n / 10;
        int last_digit = n % 10;
        int second_last = (n / 100) * 10 + last_digit;
        cout<<max(option, second_last);
    }
}
1

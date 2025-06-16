// Time Complexity - O(n)
// Space Complexity - O(1)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    string num;
    cin>>num;

    for(int i=0;i<num.length();) {
        if(num.substr(i, 3) == "144") {
            i += 3;
        } else if(num.substr(i, 2) == "14") {
            i += 2;
        } else if(num.substr(i, 1) == "1") {
            i += 1;
        } else {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    string num;
    cin>>num;

    for(int i=0;i<num.length();) {
        if(num.substr(i, 3) == "144") {
            i += 3;
        } else if(num.substr(i, 2) == "14") {
            i += 2;
        } else if(num.substr(i, 1) == "1") {
            i += 1;
        } else {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
    return 0;
}

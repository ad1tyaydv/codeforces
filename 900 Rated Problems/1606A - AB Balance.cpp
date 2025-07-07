// Time Complexity - O(n)
// Space Complexity - O(1)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--) {

        string s;
        cin>>s;

        int n = s.size();

        int count = 0;
        for(int i=0;i<s.size()-1;i++) {
            if(s[i]=='a'&&s[i+1]=='b')
                count++;
            else if(s[i]=='b'&&s[i+1]=='a')
                count--;
        }

        if(count==0)
        cout<<s<<endl;
    else if(count==1)
    {
        for(int i=0;i<s.size()-1;i++)
            cout<<s[i];
            cout<<"a"<<endl;
    }
    else
    {
        for(int i=0;i<s.size()-1;i++)
            cout<<s[i];
           cout<<"b"<<endl;
    }
   }
}

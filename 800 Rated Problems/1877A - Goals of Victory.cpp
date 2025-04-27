#include <iostream>

using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--) {

        int n;
        cin>>n;

        int total_sum = 0;
        for(int i=0;i<n-1;i++) {
            int score;
            cin>>score;

            total_sum += score;
        }

        cout<<-(total_sum)<<endl;
    }
}

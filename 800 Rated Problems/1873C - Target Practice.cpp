// Time Complexity - O(n^2)
// Space Complexity - O(10*10)

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

const int score[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};


int main() {
    int tt;
    cin>>tt;
    while(tt--) {

        vector<string> arr(10);
        for(int i=0;i<10;i++) {
            cin>>arr[i];
        }

        int result  = 0;

        for(int i=0;i<10;i++) {
            for(int j=0;j<10;j++) {
                if(arr[i][j] == 'X') {
                    result += score[i][j];
                }
            }
        }

        cout<<result<<endl;
    }
}

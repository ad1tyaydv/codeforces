// Time Complexity - O(n*m)
// Space Complexity - O(n*m)
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--) {

        int n,m;
        cin>>n>>m;

        vector<string> grid(n);
        for(int i=0;i<n;i++) {
            cin>>grid[i];
        }

        
        int max_row_hash = -1;
        int row_index = 0;
        for(int i=0;i<n;i++) {
            int count = 0;
            for(int j=0;j<m;j++) {
                if(grid[i][j] == '#') {
                    count++;
                }
                if(count > max_row_hash) {
                max_row_hash = count;
                row_index = i;
            }
            }
        }

        int max_col_hash = -1;
        int col_index = 0;
        for(int j=0;j<m;j++) {
            int count = 0;
            for(int i=0;i<n;i++) {
                if(grid[i][j] == '#') {
                    count++;
                }
                if(count > max_col_hash) {
                max_col_hash = count;
                col_index = j;
            }
            }
        }

        cout<<row_index + 1<<" "<<col_index + 1<<endl;
    }
}

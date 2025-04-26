    #include <iostream>
    #include <string>
    #include <unordered_set>
     
    using namespace std;
     
    int main() {
        int t;
        cin >> t;
        while (t--) {
            int n, m;
            string x, s;
            cin >> n >> m >> x >> s;
     
            unordered_set<char> letters_in_x;
            for (char c : x) {
                letters_in_x.insert(c);
            }
     
            bool impossible = false;
            for (char c : s) {
                if (letters_in_x.find(c) == letters_in_x.end()) {
                    impossible = true;
                    break;
                }
            }
     
            if (impossible) {
                cout << -1 << endl;
                continue;
            }
     
            int operations = 0;
            string current = x;
            bool found = false;
     
            for (int i = 0; i <= 10; i++) {
                if (current.find(s) != string::npos) {
                    cout << operations << endl;
                    found = true;
                    break;
                }
                current += current;
                operations++;
            }
     
            if (!found) {
                cout << -1 << endl;
            }
        }
        return 0;
    }

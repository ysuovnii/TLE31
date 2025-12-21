#include <bits/stdc++.h>
using namespace std;

bool isPal(string s) {
    int start = 0, end = s.length()-1;
    while(start < end) {
        if(s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    
    return true;
}

bool allOne(string s) {
    for(char c : s) {
        if(c != '1') return false;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int alice = 0, bob = 0;
        int chance = 0; 
        while(!allOne(s)) {
            if(chance%2 == 0) {
                if(isPal(s)) {
                    alice+=0;
                } else {
                    for(char& c : s) {
                        if(c == '0') {
                            c = '1';
                            break;
                        }
                    }
                    alice++;
                }
            } else {
                if(isPal(s)) {
                    bob+=0;
                } else {
                    for(char& c : s) {
                        if(c == '0') {
                            c = '1';
                            break;
                        }
                    }
                    bob++;
                }
            }

            chance++;
        }

        if(alice < bob) cout << "ALICE\n";
        else if(alice > bob) cout << "BOB\n";
        else cout << "DRAW\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(int&i : a) {
        cin >> i;
    }
    int t;
    while(q--) {
        int pos = -1;
        cin >> t;
        for(int i = 0; i < n; i++) {
            if(t == a[i]) {
                pos = i+1;
                rotate(a.begin(), a.begin() + i, a.begin() + i + 1);
                break;
            }
        }
        cout << pos << " ";
    }

    return 0;
}
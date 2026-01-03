#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        ll x, y;
        cin >> n >> x >> y;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int bp = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(((a[i] + a[j])% x == 0) && ((a[i] - a[j]) % y == 0)) {
                    bp++;
                }
            }
        }

        cout << bp << "\n";
    }

    return 0;
}
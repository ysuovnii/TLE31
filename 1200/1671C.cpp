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
        ll x;
        cin >> n >> x;

        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        sort(a.begin(), a.end());
        
        if(a[0] > x) {
            cout << 0 << "\n";
            continue;
        }
        
        ll count = 0;

        vector<ll> ps(n);
        ps[0] = a[0];

        for(int i = 1; i < n; i++) {
            ps[i] = ps[i-1] + a[i];
        }


        for(int i = 0; i < n; i++) {
            if(ps[i] > x) break;
            
            ll days = (x - ps[i]) / (i+1);
            count += days + 1;

        }

        cout << count << "\n";
    }



    return 0;
}
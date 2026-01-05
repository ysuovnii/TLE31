#include <bits/stdc++.h>
using namespace std;

#define ll long long 

ll getSum(ll d, ll k) {
    if (d <= k)
        return d * (d + 1) / 2;
    ll down = d - k;
    return k * (k + 1) / 2 + down * k - down * (down + 1) / 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll k, x;
        cin >> k >> x;
        ll ans = 0;
    
        if(k*k < x) {
            ans = 2*k-1;
        } 
        else {
            ll start = 1, end = 2*k-1;
            while (start <= end) {
                ll mid = start + (end-start)/2;
                if(getSum(mid, k) >= x) {
                    ans = mid;
                    end = mid-1;
                    
                } else {
                    start = mid+1;
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
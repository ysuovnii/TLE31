#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, q;
        cin >> n >> q; 
        vector<ll> a(n);
        vector<ll> steps(q, 0);
        ll k;
        vector<ll> height(n, 0);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(i == 0) height[i] = a[i];
            else height[i] = height[i-1] + a[i];
        }
        vector<ll> hMax(n);
        hMax[0] = a[0];

        for(int i = 1; i < n; i++) hMax[i] = max(hMax[i-1], a[i]);

        for(int qi = 0; qi < q; qi++) {
            cin >> k;

            int l = 0, r = n-1, ans = -1;

            while(l <= r) {
                int mid = l + (r - l) / 2;

                if(hMax[mid] <= k) {
                    ans = mid;
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }

            if(ans == -1) steps[qi] = 0;
            else steps[qi] = height[ans];
        }
        for(ll s : steps) {
            cout << s << " ";
        }
        cout << "\n";
    }
    return 0;
}
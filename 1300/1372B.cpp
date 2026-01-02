#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll lcm(ll a, ll b){
    return (a / __gcd(a, b)) * b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll a, b;
        if(n%2 == 0) {
            a = n/2, b = n/2; 
        }
        else {
            ll minLcm = LLONG_MAX;
            ll l = 1, r = n-1;
            while(l <= r) {
                if(minLcm >= lcm(l, r)) {
                    minLcm = lcm(l, r);
                    a = l, b = r;
                }
                l++;
                r--;
            }    
        }

        cout << a << " " << b << "\n";

    }

    return 0;
}
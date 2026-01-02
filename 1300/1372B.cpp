#include <bits/stdc++.h>
using namespace std;

#define ll long long

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
            ll div = 1;
            for (ll i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    div = n / i;
                    break;
                }
            }   
            a = div;
            b = n-div;
        }

        cout << a << " " << b << "\n";

    }

    return 0;
}
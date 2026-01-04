#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll k, x;
        cin >> k >> x;
        ll ans = 0;
    
        if(k^2 <= x) {
            ans = 2*k-1;
        } 
        else {
            ll start = 1, end = k^2;
            ll currentLine = k;
            while(start <= end) {
                ll mid = sqrt(end) * (sqrt(end) + 1) / 2;

                if(mid-(k-1) <= x <= mid) {
                    ans = currentLine;
                    break;
                }
                else if(mid > x) {
                    currentLine--;
                }
                else { // mid < x
                    currentLine++;
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
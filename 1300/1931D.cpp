#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
 
        map<pair<long long,long long>, int> freq;
        long long ans = 0;
 
        for(int i = 0; i < n; i++) {
            long long rX = ((-a[i] % x) + x) % x; 
            long long rY = (a[i] % y + y) % y;    
 
            ans += freq[{rX, rY}];
            long long modX = (a[i]%x + x)%x;
            long long modY = (a[i]%y + y)%y;
            freq[{modX, modY}]++;
        }
 
        cout << ans << "\n";
    }
}
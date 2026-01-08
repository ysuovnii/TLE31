#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll sum = 0;
    for(ll&i : a) {
      cin >> i;
      sum += i;
    }
    sort(a.begin(), a.end());
    while(k--) {
      int m = 1, M = n-1;
      ll sm = sum-a[m]-a[m-1];
      ll sM = sum-a[M];

      if(sm >= sM) {
        m+=2;
        sum = sm;
      }
      else {
        M-=1;
        sum = sM;
      }
    }
    cout << sum << "\n";
  }

  return 0;
}

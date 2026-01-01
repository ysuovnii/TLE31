#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    int n, q;
    int l, r;
    cin >> n; 
    vector<int> a(n+1);
    vector<int> diff(n), nextNonZero(n, -1);
    for(int i = 1; i <= n; i++) {
      cin >> a[i];
    }

    for(int i = 2; i <= n; i++) {
      diff[i-1] = a[i]-a[i-1];
    }

    int last = -1;
    for(int i = n-1; i >= 1; i--) {
      if(diff[i] != 0) last = i;
      nextNonZero[i] = last;
    }



    cin >> q;
    while(q--) {
      cin >> l >> r;
      int i = -1, j = -1;

      int k = nextNonZero[l];

      if(k != -1 && k < r) {
        i = k;
        j = k+1;
      }

      cout << i << " " << j << "\n";
    }
    cout << "\n";
  }

  return 0;
}

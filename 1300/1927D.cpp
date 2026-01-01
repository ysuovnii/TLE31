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

    for(int i = 1; i <= n; i++) {
      cin >> a[i];
    }

    cin >> q;
    while(q--) {
      cin >> l >> r;
      int i = -1, j = -1;

      while(l <= r) {
        int mid = l + (r-l)/2;
        if(a[l] != a[r]) {
          i = l, j = r;
          break;
        }
        else if(a[l] != a[mid]) {
          i = l, j = mid;
          break;
        }
        else if(a[mid] != a[r]) {
          i = mid, j = r;
          break;
        }
        else {
          r--;
        }
      }

      cout << i << " " << j << "\n";
    }
    cout << "\n";
  }

  return 0;
}

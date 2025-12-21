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
    cin >> n;
    int size_b = n*(n-1)/2;
    vector<ll> b(size_b);
    vector<ll> a;
    map<ll, int> hash;
    for(int i = 0; i < size_b; i++) {
      cin >> b[i];
      hash[b[i]]++;
    }
    sort(b.begin(), b.end());
    int idx = 0;
    for(int i = n-1; i >= 1; i--) {
      a.push_back(b[idx]);
      idx += i;
    }

    a.push_back(1000000000);

    for(ll i : a) cout << i << " ";
    cout  << "\n";
  }
  return 0;
}

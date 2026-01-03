#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if(n%2 == 0) {
        cout << pow(n/2 + 1, 2); 
    } else {
        cout << 2 * ((n+1)/2) * ((n+1)/2 + 1); 
    }

    return 0;
}
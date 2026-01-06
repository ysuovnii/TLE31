#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    double sum = 0;
    for(int i = 0; i < n; i++) {
        double x;
        cin >> x;
        if(i == 0 || i == n - 1) sum += x;
        else sum += 2 * x;
    }

    double div = n - k + 1;
    cout << fixed << setprecision(10) << sum / div;
}

#include <bits/stdc++.h>
using namespace std;

bool isSame(vector<int>& a, vector<int>& b) {
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int&i : a) cin >> i;
    for(int&i : b) cin >> i;
    
    
    int count = 0;
    if(isSame(a, b)) {
        count = 0;
    }
    else {
        
        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) continue;

            int j = i + 1;
            while (j < n && a[j] != b[i]) j++;

            int value = a[j];
            a.erase(a.begin() + j);
            a.insert(a.begin() + i, value);

            count++;
        }

    }
    
    cout << count;

    return 0;
}
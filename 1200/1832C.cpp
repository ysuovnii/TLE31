#include <bits/stdc++.h>
using namespace std;
 
long long contrast(vector<long long> a, int n){
    long long sum = 0; 
    for(int i = 0; i < n-1; i++){
        int j = i+1; 
        sum += abs(a[i] - a[j]); 
    }
    return sum; 
}
 
int subSeqSize(vector<long long>& a, int n, long long contrast_a) {
    int size = INT_MAX;
    long long total = 1LL << n; 
 
    for (long long i = 0; i < total; i++) {
        vector<long long> b;
        for (int j = 0; j < n; j++) {
            if (i & (1LL << j)) {
                b.push_back(a[j]); 
        }
        if (b.empty()) continue;
        long long contrast_b = contrast(b, b.size());
 
        if (contrast_b == contrast_a) {
            size = min(size, (int)b.size());
        }
    }
 
    return size;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n; 
        vector<long long> a(n); 
        for(int i = 0; i < n; i++){
            cin >> a[i]; 
        }
        long long contrast_a = contrast(a, n);
        long long contrast_b = 0; 
        int size_b; 
 
        if(contrast_a == 0) size_b = 1; 
        else{
            size_b = subSeqSize(a, n, contrast(a, n)); 
        }
 
        cout << size_b << "\n"; 
    }
    return 0; 
}

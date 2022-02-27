#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    int max_weight = 0;
    for(int i=0; i<n; i++) {
        max_weight = max(max_weight, v[i] * (n-i));
    }
    
    cout << max_weight;
    
    return 0;
}

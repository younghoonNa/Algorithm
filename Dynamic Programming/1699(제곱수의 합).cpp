#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    int n;
    cin >> n;
    
    vector<int> v(n+1);
    
    for(int i=1; i<=n; i++) {
        v[i] = i;
        
        for(int j=1; j*j <=i; j++) {
            v[i] = min(v[i], v[i-j*j]+1);
        }
    }
    
    cout << v[n];
    

    return 0;
}

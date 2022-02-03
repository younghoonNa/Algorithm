/*

에라토스테네스의 체의 시간복잡도는 O(NloglogN) 이다

*/


#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k,n;
    cin >> k >> n;
    
    vector<int> v(n+1);
    
    v[0] = 1;
    v[1] = 1;
    

    for(int i=2; i<=n; i++) {
        for(int j=2; j<=n/i; j++) {
            v[i*j]++;
        }
    }


    for(int i=k; i<=n; i++) {
        if(v[i] == 0)
            cout << i << '\n';
    }
    
}




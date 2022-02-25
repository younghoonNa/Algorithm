#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int E,S,M;
    cin >> E >> S >> M;
    
    int e=1, s=1, m=1;
    int sum=1;
    while(true) {
        if (E == e && S == s && M == m)
            break;
        
        e++; s++; m++; sum++;
        
        if(e > 15) e = 1;
        if(s > 28) s = 1;
        if(m > 19) m = 1;
    }
    
    cout << sum;
    
    return 0;
}

#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;



int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b;
    cin >> a >> b;
    
    int result=1;
    for (int i=0; i<b; i++) {
        result *= a;
        a--;
    }
    
    for (int i=1; i<=b; i++) {
        result /= i;
    }
    
    cout << result;
 
}

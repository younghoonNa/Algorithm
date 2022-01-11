#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i=2; i<=n; i++) {
        if(n%i == 0) {
            cout << i <<endl;
            n = n/i;
            i -= 1;
        }
           
        if(n==1)
            break;
    }
    
    return 0;
    
}



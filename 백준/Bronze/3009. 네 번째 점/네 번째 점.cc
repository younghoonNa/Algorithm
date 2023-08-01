#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a1, a2, b1, b2, c1, c2, d1,d2;
    
    cin >> a1 >> a2;
    cin >> b1 >> b2;
    cin >> c1 >> c2;

    if(a1 == b1)
        d1 = c1;
    else if(a1 == c1)
        d1 = b1;
    else if(b1 == c1)
        d1 = a1;
    
    if(a2==b2)
        d2 = c2;
    else if(a2==c2)
        d2 = b2;
    else if(b2==c2)
        d2 = a2;
    
    
    cout << d1 << " " << d2;
    
    return 0;
    
}



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
    
    int cnt_2=0; int cnt_5 = 0;

    
    for (int i=2; i<=n; i++) {
        int k = i;
        while(k%2==0) {
            cnt_2++;
            k/=2;
        }
        
        while(k%5==0) {
            cnt_5++;
            k/=5;
        }
    }

    
    cout << min(cnt_2, cnt_5) << endl;

    
    return 0;
}

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;



int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k, n;
    cin >> k >> n;
    
    vector<int> v(k);
    vector<int> vec;
    for (int i=0; i<k; i++) {
        cin >> v[i];
    }
    
    int sum=0;
    sort(v.begin(), v.end(), greater<int>());
        
    for (int i=k-1; i>=0; i--) {
        for (int j=i-1; j>=0; j--) {
            for (int t=j-1; t>=0; t--) {

                sum += (v[i] + v[j] + v[t]);
                if (sum == n) {
                    cout << sum;
                    return 0;
                } else if (sum < n) {
                    vec.push_back(sum);
                }
                
                sum=0;
                
            }
        }
    }
    
    sort(vec.begin(), vec.end(), greater<int>());
    cout << vec[0];

    
 
}

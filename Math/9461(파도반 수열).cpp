#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;



int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k;
    cin >> k;
    vector <long> v(k);


    
    for (int i=0; i<k; i++) {
        cin >> v[i];
        vector <long> result;
        
        result.push_back(1); result.push_back(1); result.push_back(1);
        for (int t=3; t<=v[i]; t++) {
            result.push_back(result[t-3] + result[t-2]);
        }
        
        v[i] = result[v[i]-1];
    }
    
    for(int i=0; i<k; i++) {
        cout<<v[i] << '\n';
    }
    
 
}

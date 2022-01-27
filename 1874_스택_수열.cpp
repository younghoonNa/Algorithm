#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k;
    cin >> k;
    
    vector<int> v(k);
    vector<int> tmp(k);

    vector<char> w;
    stack<int> stack;
    
    for(int i=0; i<k; i++) {
        cin >> v[i];
        tmp[i] = i+1;
    }
    
    int j;
    for(int i=0; i<k; i++) {
        
        if(v[i] >= tmp.front()) {
            for(j=tmp.front(); j<=v[i]; j++) {
                stack.push(tmp.front());
                w.push_back('+');
                tmp.erase(tmp.begin());
                
            }
        }
       
        if(v[i] ==  stack.top()) {
            stack.pop();
            w.push_back('-');
        } else {
            cout << "NO";
            return 0;
        }
            
    }
    
    for(int i=0; i<w.size(); i++) {
        cout << w[i] << "\n";
    }
}

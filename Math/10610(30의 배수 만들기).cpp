#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    string str;
    cin >> str;
    vector<char> v;
    
    bool check = false;
    long long sum = 0;
    for(long long i=0; i<str.length(); i++) {
        if(str[i] == '0') {
            check = true;
        } else {
            sum += str[i] - '0';
        }
        v.push_back(str[i]);
    }
    

    if (!check || sum%3!=0) {
        cout << "-1";
        return 0;
    } else {
        sort(v.begin(), v.end(), greater<int>());
        for(long long i=0; i<v.size(); i++) {
            cout << v[i];
        }
    }



    

    
    return 0;
}

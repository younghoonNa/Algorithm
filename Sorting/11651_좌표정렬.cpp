#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
    if(a.second < b.second)
        return true;
    else if(a.second == b.second)
        return a.first < b.first;
    

    return false;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;
    
    vector<pair<int, int>> v;

    
    for(int i=0; i<k; i++) {
        int x,y;
        cin >> x >> y;
        
        v.push_back({x,y});
    }
    
    sort(v.begin(), v.end(), comp);
//    sort(v.begin(), v.end(), comp2);

//    cout << "-----------------\n";
    
    for(int i=0; i<v.size(); i++) {
        cout << v[i].first << " " << v[i].second << '\n';
    }
    
}



/*
4
1 1
1 -1
-1 1
-1 -1
 
 5
 100 1
 50 2
 70 3
 30 3
 100 4
 
 5
 0 4
 3 2
 2 2
 1 2
 0 2
 
 6
 1 1
 -1 1
 1 -1
 -1 -1
 4 1000000
 -4 -1000000
 
 11
 0 -1000000
 -10 -1000000
 -1000000 -2
 0 4
 2 2
 -1000000 0
 1 -1
 1 2
 -1000000 2
 10 -1000000
 0 0
 
 */

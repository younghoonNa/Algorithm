#include <iostream>
#include <stdio.h>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;


void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    
    init();
    
    int x;
    cin >> x;
    
    if(x==1) {
        cout << 0;
        return 0;
    }
        
    queue<int> q;
    vector<int> v(x+1, x+1);
    
    q.push(x);
    
    int cnt = 0;
    while(q.size() != 0) {
        int tmp = q.front();
        bool b = false;
        
        if(tmp == 1) {
            q.pop();
            continue;
        }
            
        
//        cout << tmp << " " << cnt << endl;

        if(tmp %3 == 0) {
            q.push(tmp/3);
            v[tmp/3] = min(v[tmp/3], ++cnt);
            b = true;
        }

        if (tmp % 2 == 0) {
            q.push(tmp/2);
            v[tmp/2] = min(v[tmp/2], ++cnt);
            if(b) cnt--;

        }

        q.push(tmp-1);
        if(b) cnt--;
        v[tmp-1] = min(v[tmp-1], ++cnt);
        q.pop();

    }

    cout << v[1];
    return 0;
 
}

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
    } else if (x==2 || x == 3) {
        cout << 1;
        return 0;
    }
    
    vector<int> v(x+1);
    queue<int> q;
    
    q.push(x);
    
    int cnt = 0;
    int tmp;
    
//    v[x-1]++;
//    if(!(x%2)) v[x/2]++;
//    if(!(x%3)) v[x/3]++;
//
    
//    v[x] = 1;
    
    for(int i=x; i>=2; i--) {
        cnt = v[i];
        cnt++;
        
        
        tmp = v[i-1];
        if(!tmp) v[i-1] = cnt;
        else v[i-1] = min(tmp, cnt);
        
        if (!(i%2)) {
            tmp = v[i/2];
            if(!tmp) v[i/2] = cnt;
            else v[i/2] = min(tmp, cnt);
        }
        
        if(!(i%3)) {
            tmp = v[i/3];
            if(!tmp) v[i/3] = cnt;
            else v[i/3] = min(tmp, cnt);
        }
        
        
//        if(!cnt) {
//            continue;
//        } else {
//
//
        
//
//
//        for(int i=0;i<v.size(); i++)
//            cout << v[i] << " ";
            
//        cout << "\n";
    }
    
    cout << v[1];
                
//
//
////        int tmp = q.front();
//        bool b = false;
//
//        if(tmp == 1) {
//            q.pop();
//            continue;
//        }
//
//
//        q.push(tmp-1);
//        if(b) cnt--;
//        v[tmp-1] = min(v[tmp-1], ++cnt);
//        q.pop();
//
////        cout << tmp << " " << cnt << endl;
//
//        if(tmp %3 == 0) {
//            q.push(tmp/3);
//            v[tmp/3] = min(v[tmp/3], ++cnt);
//            b = true;
//        }
//
//        if (tmp % 2 == 0) {
//            q.push(tmp/2);
//            v[tmp/2] = min(v[tmp/2], ++cnt);
//            if(b) cnt--;
//
//        }


    return 0;
 
}

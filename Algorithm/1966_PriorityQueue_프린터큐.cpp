#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;
    
    vector<int> v;
    
    for(int i=0; i<k; i++) {
        int num_queue, importance;
        cin >> num_queue >> importance;
        
        
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        int cnt=0;
        for(int t=0; t<num_queue; t++) {
            int tmp;
            cin >> tmp;
            q.push({tmp, t});
            pq.push(tmp);
        }
        
        while(pq.size() != 0) {
            auto pointer = q.front();
                        
            if(pq.top() == pointer.first) {
                q.pop();
                pq.pop();
                cnt++;
                
                if(pointer.second == importance) {
                    break;
                }
                
            } else {
                q.push({pointer.first, pointer.second});
                q.pop();
                
            }
        }
        
        v.push_back(cnt);
        
    }
    
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << '\n';
    }
    
    
    
}




#include <iostream>
#include <stdio.h>
#include <queue>
#include <vector>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin >> n >> k;
    
    queue<int> q;
    vector<int> v;
    for (int i=0; i<n; i++) {
        q.push(i+1);
    }
    
    int cnt=0;
    int count =0;
    while(!q.empty()) {
        if (cnt == q.size())
            cnt = 0;

        if (count == k-1) {
            v.push_back(q.front());
            count = 0;
            q.pop();
        } else {
            q.push(q.front());
            q.pop();
            count++;
        }
        cnt++;
    }
    
    cout << "<";
    for (int i=0; i<n; i++) {
        cout <<v[i];
        
        if (i!= n-1)
            cout << ", ";
    }
    cout << ">";
    
    return 0;
}

#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

vector<int> lotto;
vector<int> v;


void DFS(int num, int cnt) {
    if (cnt == 6) {
        for (int i=0; i<6; i++) {
            cout << lotto[i] << " ";
        }
        
        cout << "\n";
        return ;
    }
    
    else {
        if(num == v.size())
            return;
        
        lotto.push_back(v[num]);
        DFS(num+1, cnt+1);
        lotto.pop_back();
        DFS(num+1, cnt);
    }
}

//7 1 2 3 4 5 6 7
//0

//8 1 2 3 5 8 13 21 34
//0

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    while(n != 0) {
        
        for (int i=0; i<n; i++) {
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
        
        DFS(0, 0);
        v.clear();
        
        cin >> n;
        
        if(n==0)
            break;
        else
            cout << "\n";
    }
    
    

    
    return 0;
}

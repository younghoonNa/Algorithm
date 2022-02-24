#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<char> v;
vector<char> key;
int L,C;

int Vowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u')
        return 1;
    else
        return 0;
}

void DFS(int num, int cnt) {
    if(cnt == L) {
        
        
        string str = "";
        int vowel_cnt = 0;
        for (int i=0; i<L; i++) {
            str += key[i];
            vowel_cnt += Vowel(key[i]);
        }
        
        if (vowel_cnt < 1 || L - vowel_cnt < 2)
            return ;
        else
            cout <<  str <<'\n';
        
        return ;
    } else {
        if (num == v.size()) {
            return;
        }
        
        key.push_back(v[num]);
        DFS(num+1, cnt+1);
        key.pop_back();
        DFS(num+1, cnt);
    }
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> L >> C;
    
    for(int i=0; i<C; i++) {
        char ch;
        cin >> ch;
        v.push_back(ch);
    }
    sort(v.begin(), v.end());
    
    DFS(0,0);
    
    
    return 0;
}

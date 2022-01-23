#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k;
    cin >> k;
    
    vector<int> v; // stact
    vector<int> output;
    
    for(int i=0; i<k; i++) {
        string str; int n;
        cin >> str;
        
        if(str == "push") {
            cin >> n;
            v.push_back(n);
        }
        
        else if (str == "pop") {
            if(v.size() ==0)
                output.push_back(-1);
            else {
                output.push_back(v.back());
                v.pop_back();
            }
                
        }
            
        else if (str == "top") {
            if(v.size() ==0)
                output.push_back(-1);
            else
                output.push_back(v.back());
        }
        
        else if (str == "size") {
            int tmp = v.size();
            output.push_back(tmp);
        }
        else if (str == "empty") {
            if(v.size()==0) output.push_back(1);
            else output.push_back(0);
        }

        
    }
    
    for(int i=0; i<output.size(); i++) {
        printf("%d\n", output[i]);
    }
    
    return 0;
}
/*
14
push 1
push 2
top
size
empty
pop
pop
pop
size
empty
pop
push 3
empty
top
 */

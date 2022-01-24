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
    
    vector<int> Deque;
    vector<int> output;
    
    for(int i=0; i<k; i++) {
        string str; int n;
        cin >> str;
        
        if(str == "push_front") {
            cin >> n;
            Deque.insert(Deque.end(), n);
        }
        
        else if(str == "push_back") {
            cin >> n;
            Deque.insert(Deque.begin(), n);
        }
        
        
        else if (str == "pop_front") {
            if(Deque.size() ==0)
                output.push_back(-1);
            else {
                output.push_back(Deque.back());
                Deque.pop_back();
            }
                
        }
        
        else if (str == "pop_back") {
            if(Deque.size() ==0)
                output.push_back(-1);
            else {
                output.push_back(Deque.front());
                Deque.erase(Deque.begin());
            }
                
        }
            
        else if (str == "back") {
            if(Deque.size() ==0)
                output.push_back(-1);
            else
                output.push_back(Deque.front());
        }
        
        else if (str == "front") {
            if(Deque.size() ==0)
                output.push_back(-1);
            else
                output.push_back(Deque.back());
        }
        
        
        else if (str == "size") {
            int tmp = Deque.size();
            output.push_back(tmp);
        }
        
        else if (str == "empty") {
            if(Deque.size()==0) output.push_back(1);
            else output.push_back(0);
        }

        
    }
    
    for(int i=0; i<output.size(); i++) {
        printf("%d\n", output[i]);
    }
    
    return 0;
}

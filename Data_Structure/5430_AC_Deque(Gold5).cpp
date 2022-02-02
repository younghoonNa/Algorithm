

#include <iostream>
#include <stdio.h>
#include <deque>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;
    
    vector<string> result;
    
    for(int i=0; i<k; i++) {
        string str;
        cin >> str;
        
        int d_cnt=0;
        string rst = "";
        for(int t=0; t<str.length(); t++) {
            if(str[t] == 'D') {
                d_cnt++;
            }
        }
        
        
        int num;
        cin >> num;

        cin.ignore();
        string arr;
        getline(cin, arr);
        
        
        if (d_cnt > num) {
            result.push_back("error");
            continue;
        }
        
        
        deque<int> dq;
        string s = "";

        int num_cnt=0;
        for(int t=1; num_cnt < num; t++) {
            if (arr[t] == ']') {
                int tmp = stoi(s);
                dq.push_back(tmp);
                break;
            }
            else if (arr[t] == ',') {
                int tmp = stoi(s);
                dq.push_back(tmp);
                s = "";
                num_cnt++;
            } else if(arr[t] != ',') {
                s += arr[t];
            }
                
        }
        
        int cursor = 1;
        for(int t=0; t<str.length(); t++) {
            if (str[t] == 'R') {
                cursor *= -1;
            }
                
            else if(str[t] == 'D') {
                if(dq.size() == 0) {
                    cout << "error\n";
                    break;
                } else {
                    if(cursor == 1)  dq.pop_front();
                    else dq.pop_back(); //cursor == -1일 때.
                }
            }
        }
        
        
        rst += "[";
        
        if(cursor == 1) {
            for(int t=0; t<dq.size(); t++) {
                rst += to_string(dq[t]);
                
                if(t != dq.size()-1)
                    rst+=',';
            }
        } else {
            for (int t=dq.size()-1; t>=0; t--) {
                rst += to_string(dq[t]);
                
                if(t != 0)
                    rst+=',';
            }
        }
        
        rst+=']';
        
        result.push_back(rst);
    }
    
    for(int i=0; i<result.size(); i++) {
        cout << result[i] << '\n';
    }
}


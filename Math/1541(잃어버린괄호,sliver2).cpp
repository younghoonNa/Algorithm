#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str;
    cin >> str;
    
    vector<int> v;
    
    
    bool plus = true;
    int sum =0;
    int minus = 0;
    string tmp = "";

    for(int i=0; i<str.length(); i++) {
        if(str[i] == '+') {
            if(plus)
                sum += stoi(tmp);
            else {
                minus += stoi(tmp);
            }
            
            tmp = "";

        } else if (str[i] == '-') {
            if(plus) {
                // - 전에 들어온 수는 더해주기.
                sum += stoi(tmp);
            } else {
                minus += stoi(tmp);
                sum -= minus;
                minus = 0;
            }
            
            tmp = "";
            plus = false;
//            50+50-100+100-100-100

            
        } else {
            tmp += str[i];
        }
    }
    
    if(plus) {
        sum += stoi(tmp);
    } else {
        minus += stoi(tmp);
        sum -= minus;
    }
//        

    cout << sum;
    
    return 0;
}

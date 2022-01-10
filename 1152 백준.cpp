//1152번 백준
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <ctype.h>

using namespace std;

int main() {
    int i =0 , count = 0;
    string str;
    
    getline(cin, str);
    
    
    
    if (str.empty()) {
        count = 0;
        return 0;
    }
        
    count++;
    while(i< str.length()) {
        
        if(str[i] == ' ') {
            count++;
        }
        
        i++;
    }
    
    if(str[0] == ' ')
        count--;  // 시작 부분이 공백도 가능하다고 하였으므로
    
    if(str[str.length()-1] == ' ' )
        count --; // 마지막 부분도 공백이 가능하므로 -1
    
    cout << count;
    
}

    

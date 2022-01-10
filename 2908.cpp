#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    
    for (int i =str1.length()-1; i>=0; i--) {
        if(str1[i] > str2[i]) {
            cout << str1[2] << str1[1] << str1[0];
            return 0;
        } else if (str1[i] < str2[i]) {
            cout << str2[2] << str2[1] << str2[0];
            return 0;
        } else {
            continue;
        }
            
    }
    return 0;
}

    

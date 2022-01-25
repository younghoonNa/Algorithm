#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

// 문자열 s1와 s2를 붙였을때 s1가 앞에 s2가 뒤에 붙었을때가 더 크면 true 리턴
// s1가 뒤에 s2가 앞에 붙었을때가 더 크면 false 리턴
// 즉 문자열이 더 큰 순으로 리턴
bool comp2(std::string s1, std::string s2) {
    return s1 + s2 > s2 + s1;
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k;
    cin >> k;
    
    vector<string> v;

    string str;
    int i=0;
    int sum=0;
    for(i=0; i<k; i++) {

        cin >> str;
        sum += stoi(str);
        v.push_back(str);

    }
//    sort(v.begin(), v.end(), compare);
    sort(v.begin(), v.end(), comp2);
    
    if(sum==0) {
        cout << 0;
        return 0;
    }
        
        

    for(int i=0; i<k; i++) {
        cout << v[i];
    }
    
    return 0;
}
/*/
7
92
91
9
78
7
888
76
 */

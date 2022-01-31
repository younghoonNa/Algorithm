#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

bool compare(string &s1, string &s2) {

    if (s1.length() == s2.length()) {
            return s1 > s2;
    }
    else {
        return s1.length() > s2.length();
    }
}

// 문자열 s1와 s2를 붙였을때 s1가 앞에 s2가 뒤에 붙었을때가 더 크면 true 리턴
// s1가 뒤에 s2가 앞에 붙었을때가 더 크면 false 리턴
// 즉 문자열이 더 큰 순으로 리턴
bool comp2(std::string s1, std::string s2) {
    return s1 + s2 > s2 + s1;
}


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k, n;
    cin >> k >> n;
    
    vector<string> v;
    vector<string> v2;

    
    string str;
    int i=0;
    for(i=0; i<k; i++) {

        cin >> str;

        v.push_back(str);
        v2.push_back(str);

    }
    sort(v.begin(), v.end(), compare);

    for(i=k; i<n; i++) {
        v2.push_back(v[0]);
    }

        sort(v2.begin(), v2.end(), comp2);

    for(int i=0; i<n; i++) {
        cout << v2[i];
    }
    
    return 0;
}

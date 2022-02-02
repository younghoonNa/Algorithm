
/*

선영이는 주말에 할 일이 없어서 새로운 언어 AC를 만들었다. AC는 정수 배열에 연산을 하기 위해 만든 언어이다. 이 언어에는 두 가지 함수 R(뒤집기)과 D(버리기)가 있다. 

함수 R은 배열에 있는 수의 순서를 뒤집는 함수이고, D는 첫 번째 수를 버리는 함수이다. 배열이 비어있는데 D를 사용한 경우에는 에러가 발생한다.

함수는 조합해서 한 번에 사용할 수 있다. 예를 들어, "AB"는 A를 수행한 다음에 바로 이어서 B를 수행하는 함수이다. 예를 들어, "RDD"는 배열을 뒤집은 다음 처음 두 수를 버리는 함수이다.

배열의 초기값과 수행할 함수가 주어졌을 때, 최종 결과를 구하는 프로그램을 작성하시오.

*/

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


#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int max =1000000;

    vector<pair<int, int>> result;
    vector<int> cap(max+1);
    vector<int> v;
    
    cap[0] = 1; cap[1] = 1; cap[2] = 1;
    
    for(int t=2; t*t<= max; t++) {
        for(int j=2; j<= max/t; j++) {
            cap[t*j] = 1;
        }
    }
    
    
    for(int t=0; t<max; t++) {
        if (cap[t] == 0) {
            v.push_back(t);
        }
    }
    
    while(true) {
        int tmp;
        cin >> tmp;
        
        if (tmp == 0) break;
    
        for(int i=0; v[i]<=tmp; i++) {
            int ans = tmp - v[i];
            
            if(cap[ans] == 0) {
                result.push_back({v[i], ans});
                break;
            }
        }
        
        
        // 내가 했던 반으로 쪼개서 했던 방식
//        vector<int> first;
        //        vector<int> last;
//         for(int t=0; t<tmp; t++) {
//             if (cap[t] == 0) {
//                if(t > tmp/2)
//                    last.push_back(t);
//                else
//                    first.push_back(t);
//             }
//        }

//        if(first[first.size()-1] * 2 == tmp) {
//            result.push_back({first[first.size()-1], first[first.size()-1]});
//        } else {
//            bool b = false;
//            for(int t = 0; t<first.size(); t++) {
//                for(int j = last.size()-1; j>=0; j--) {
//                    if(first[t] + last[j] == tmp) {
//                        result.push_back({first[t], last[j]});
//                        b = true;
//                        break;
//                    } else if (first[t] + last[j] < tmp)
//                        break;
//                }
//
//                if (b==true)
//                    break;
//            }
//        }

    }
    
    for(int i=0; i<result.size(); i++) {
        printf("%d = %d + %d\n", result[i].first + result[i].second, result[i].first, result[i].second);
    }
    


    
    return 0;
}

/*
1000000
 */

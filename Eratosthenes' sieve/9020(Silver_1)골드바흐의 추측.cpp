문제
1보다 큰 자연수 중에서  1과 자기 자신을 제외한 약수가 없는 자연수를 소수라고 한다. 예를 들어, 5는 1과 5를 제외한 약수가 없기 때문에 소수이다. 하지만, 6은 6 = 2 × 3 이기 때문에 소수가 아니다.

골드바흐의 추측은 유명한 정수론의 미해결 문제로, 2보다 큰 모든 짝수는 두 소수의 합으로 나타낼 수 있다는 것이다. 이러한 수를 골드바흐 수라고 한다. 
    
또, 짝수를 두 소수의 합으로 나타내는 표현을 그 수의 골드바흐 파티션이라고 한다. 예를 들면, 4 = 2 + 2, 6 = 3 + 3, 8 = 3 + 5, 10 = 5 + 5, 12 = 5 + 7, 14 = 3 + 11, 14 = 7 + 7이다. 
    
10000보다 작거나 같은 모든 짝수 n에 대한 골드바흐 파티션은 존재한다.

2보다 큰 짝수 n이 주어졌을 때, n의 골드바흐 파티션을 출력하는 프로그램을 작성하시오. 만약 가능한 n의 골드바흐 파티션이 여러 가지인 경우에는 두 소수의 차이가 가장 작은 것을 출력한다.

입력
첫째 줄에 테스트 케이스의 개수 T가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고 짝수 n이 주어진다.

출력
각 테스트 케이스에 대해서 주어진 n의 골드바흐 파티션을 출력한다. 출력하는 소수는 작은 것부터 먼저 출력하며, 공백으로 구분한다.


#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int k;
    cin >> k;
    vector<pair<int, int>> result;
    
    for(int t=0; t<k; t++) {
        int num;
        cin >> num;
        
        vector<int> v(num+1);
        vector<int> last;
        vector<int> first;
        v[0] = 1;
        v[1] = 1;
        
        for(int i=2; i<=num; i++) {
            for(int j=2; j<=num/i; j++) {
                v[i*j]++;
            }
        }
        
        for(int i=0; i<v.size(); i++) {
            if(v[i] == 0) {
                if(i >= num/2)
                    last.push_back(i);
                else
                    first.push_back(i);
            }
                
        }
        
        
        if(last[0] * 2 == num) {
            result.push_back({last[0], last[0]});
        } else {
            bool b = false;
            for(int i=0; i<last.size(); i++) {
                for(int j=first.size()-1; j>=0; j--) {
                    if(num == last[i] + first[j])  {
                        result.push_back({first[j], last[i]});
                        b = true;
                        break;
                    } else if (num > last[i] + first[j]) {
                        break;
                    }
                }
                
                if (b == true)
                    break;
            }
        }
        
                
    }
    
    
    for(int i=0; i<result.size(); i++) {
        cout << result[i].first << " " << result[i].second << '\n';
    }

    
}

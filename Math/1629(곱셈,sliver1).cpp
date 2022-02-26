#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


long long result = 1;
long long divide(long long a, long long b, long long c) {

    
    a %= c;
    // 2,147,483,647를 한번이라도 곱하는 순간 범위 초과하지않아..?
    // 모듈러 연산에 의해 나머지를 구하기 위해서 나머지를 사용해도 결과는 같음.
    
    while (b>0) {
        
        // b가 1일 때 즉 제일 밑단에 있는 친구가 등장 할 때 result에 곱하고 나누면서 결과 확인
        if(b%2==1) {
            // b가 홀수일 경우에는 /2 한거에 *를 한번 더 해줘야 하기 때문.
            result *= a;
            result %= c;
        }
        
        a = ((a%c) * (a%c)) %c;
        
        b /=2;
    }
    
    return result;
    

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
    long long A,B,C;
    cin >> A >> B >> C;
    
    
    
    cout << divide(A, B, C);;
    
    return 0;
}

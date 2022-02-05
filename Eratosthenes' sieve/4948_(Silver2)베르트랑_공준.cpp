
문제
베르트랑 공준은 임의의 자연수 n에 대하여, n보다 크고, 2n보다 작거나 같은 소수는 적어도 하나 존재한다는 내용을 담고 있다.

이 명제는 조제프 베르트랑이 1845년에 추측했고, 파프누티 체비쇼프가 1850년에 증명했다.

예를 들어, 10보다 크고, 20보다 작거나 같은 소수는 4개가 있다. (11, 13, 17, 19) 또, 14보다 크고, 28보다 작거나 같은 소수는 3개가 있다. (17,19, 23)

자연수 n이 주어졌을 때, n보다 크고, 2n보다 작거나 같은 소수의 개수를 구하는 프로그램을 작성하시오. 
  
#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n = 123456*2;
    
    vector<int> v(n + 1);
    vector<int> result;
    
    v[0] = 1;
    v[1] = 1;

    for(int i=2; i<=n; i++) {
        for(int j=2; j<=n/i; j++) {
            v[i*j]++;
        }
    }
    
    int k;

    while(cin >> k) {

        if(k==0)
            break;

        int cnt=0;
        for(int i=k+1; i<=2*k; i++) {
            if(v[i] == 0)
                cnt++;

        }
        result.push_back(cnt);
//        cout << cnt << '\n';


    }

    for(int i=0; i < result.size(); i++) {
        cout << result[i] << '\n';
    }

}

/*

우현이는 어린 시절, 지구 외의 다른 행성에서도 인류들이 살아갈 수 있는 미래가 오리라 믿었다. 
그리고 그가 지구라는 세상에 발을 내려 놓은 지 23년이 지난 지금, 
세계 최연소 ASNA 우주 비행사가 되어 새로운 세계에 발을 내려 놓는 영광의 순간을 기다리고 있다.

그가 탑승하게 될 우주선은 Alpha Centauri라는 새로운 인류의 보금자리를 개척하기 위한 대규모 생활 유지 시스템을 탑재하고 있기 때문에, 
그 크기와 질량이 엄청난 이유로 최신기술력을 총 동원하여 개발한 공간이동 장치를 탑재하였다. 
하지만 이 공간이동 장치는 이동 거리를 급격하게 늘릴 경우 기계에 심각한 결함이 발생하는 단점이 있어서,
이전 작동시기에 k광년을 이동하였을 때는 k-1 , k 혹은 k+1 광년만을 다시 이동할 수 있다. 
예를 들어, 이 장치를 처음 작동시킬 경우 -1 , 0 , 1 광년을 이론상 이동할 수 있으나 사실상 음수 혹은 0 거리만큼의 이동은 의미가 없으므로 1 광년을 이동할 수 있으며, 
그 다음에는 0 , 1 , 2 광년을 이동할 수 있는 것이다. ( 여기서 다시 2광년을 이동한다면 다음 시기엔 1, 2, 3 광년을 이동할 수 있다. )

*/

#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    
    vector<int> v;
    for(int i=0; i<n; i++) {
        int k, w;
        cin >> k >> w;
        
        k = w-k;
        
        if (k <= 3) {
            v.push_back(k);
            continue;
        }
        
        int t = sqrt(k);
        if (sqrt(k) - t >= 0.5) {
            t *= 2;
            t++;

        } else if (sqrt(k) == t) {
            t *= 2;
            t--;
        } else {
            t*=2;
        }
        
        v.push_back(t);
//        cout << t << '\n';
        

    }
    
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << '\n';
    }


}


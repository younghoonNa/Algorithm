에라토스테네스의 체의 시간복잡도는 O(NloglogN) 이다.

v[0] = 1;
v[1] = 1;

for(int i=2; i<=n; i++) {
    for(int j=2; j<=n/i; j++) {
        v[i*j]++;
    }
}

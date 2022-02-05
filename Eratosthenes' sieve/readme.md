에라토스테네스의 체의 시간복잡도는 O(NloglogN) 이다. <br>

v[0] = 1; <br>
v[1] = 1; <br>

for(int i=2; i<=n; i++) { <br>
    for(int j=2; j<=n/i; j++) { <br>
        v[i*j]++; <br>
    } <br>
} <br>

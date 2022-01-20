#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
 
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int score[8];
    int sort5[8];
    int *index = new int[5];

    for(int i=0; i<8; i++) {
        cin >> score[i];
        sort5[i] = score[i];
    }
    
    
    sort(sort5, sort5+8);
    int mid = sort5[2];

    int cnt=0;
    int sum=0;
    for(int i=0; i<8; i++) {
        if (score[i] > mid) {
            index[cnt++] = i;
            sum += score[i];
        }
    }
    
    cout <<sum << "\n";
    for(int i=0; i<5; i++) {
        cout << index[i]+1  << " ";
    }
}
    

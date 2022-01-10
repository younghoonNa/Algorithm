//제1회 강원대학교 컴퓨터공학과 전공동아리 프로그래밍 경진대회 예선

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
    int k =0;
    int W, H;
    
    cin>> k;
    
    int *index = new int[k];
    float *ppi_list = new float[k];
    float max_ppi =-1;
    
    for(int i=0; i<k; i++) {
        cin >> W >> H;
        float PPI = (((W*W + H*H))); // 수정 필요.
        
        ppi_list[i] = PPI;
        index[i] = i+1;
            
    }

    for(int i=0; i<k; i++) {
        for(int j =0; j<k; j++) {
            if(ppi_list[i] > ppi_list[j]){
                //리스트 순서 바꾸기
                int tmp = ppi_list[i];
                ppi_list[i] = ppi_list[j];
                ppi_list[j] = tmp;
                
                //인덱스 순서 바꾸기.
                int tmp_index = index[i];
                index[i] = index[j];
                index[j] = tmp_index;
            }
            else if (ppi_list[i] == ppi_list[j]) {
                if(index[i] < index[j]) {
                    int tmp_index = index[i];
                    index[i] = index[j];
                    index[j] = tmp_index;
                }
            }
        }
        
    }
    
    for(int i=0; i<k; i++) {
//        cout << ppi_list[i] << '\t';
        cout << index[i] << endl;
    }
    
}



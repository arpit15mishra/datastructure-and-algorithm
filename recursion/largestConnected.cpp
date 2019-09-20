#include<bits/stdc++.h>
using namespace std;


int getval(int *A,int i, int j, int L,int H){
    if(i<0|| i>=L||j<0||j>=H) return 0;
    else return A[i][j];
}

void findMaxBlock(int (*A)[5],int r,int c,int L,int H,int size, bool **cntarr,int &maxsize){
    if(r>=L|| c>= H) return;
    cntarr[r][c] = true;
    size++;
    if(size>maxsize) maxsize = size;

    int direction[][2] = {{-1,0},{-1,-1},{0,-1},{1,-1},{1,0},{1,1},{0,1}{-1,1}};
    for(int i = 0 ; i < 8; i++){
        int newi = r + direction[i][0];
        int newj = c + direction[i][1];
        int val = getval(A,newi,newj,L,H);
        if(val>0 && (cntarr[newi][newj]==false)){
            findMaxBlock(A,newi,newj,L,H,size,cntarr,maxsize);
        }
    }
    cntarr[r][c] = false;

}

int
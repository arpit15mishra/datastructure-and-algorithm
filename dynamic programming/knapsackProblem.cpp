#include<bits/stdc++.h>
using namespace std;
int coins[]={1,3,3,5};
const int W = 1+3+3+5;
int possible[4][W];
bool knapsackSolve(){
    possible[0][0];
    for(int i = 0 ; i < 4 ; i++ ){
        for(int j = 0 ; j <=W; j++){
            if(j-coins[i]>=0) possible[i][j] |= possible[i-1][j-coins[i]];
            possible[i][j] |= possible[i-1][j]; 
        }
    }
    return possible[4-1][W];
}

int main(){
    if(knapsackSolve())cout<<"it is possible\n";
    return 0;
}
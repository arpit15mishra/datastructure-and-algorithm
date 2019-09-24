#include<bits/stdc++.h>
using namespace std;
int coins[]={1,3,3,5};
const int W = 1+3+3+5;
int possible[W];
bool knapsackSolve(){
    possible[0];
    for(int i = 0 ; i < 4 ; i++ ){
        for(int j = W-1 ; j >= 0; j--){
            if(possible[j]) possible[j+coins[i]] = true; 
        }
    }
    return possible[W-1];
}

int main(){
    if(knapsackSolve())cout<<"it is possible\n";
    return 0;
}
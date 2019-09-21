#include<bits/stdc++.h>
using namespace std;
int count=0;
vector<int> column(8,0);
vector<int> diag1(16,0);
vector<int> diag2(16,0);
int counter = 0;
int n=8;
void search(int y){
    if(y==n){
        counter++;
        return;
    }
    for(int x = 0; x < n; x++){
        if(column[x]||diag1[x+y]||diag2[x-y+n-1]) continue;
        column[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
        search(y+1);
        column[x] = diag1[x+y] = diag2[x-y+n-1] = 0;

    }
   
}

int main(){
    search(0);
    cout<<counter;
    return 0;

}
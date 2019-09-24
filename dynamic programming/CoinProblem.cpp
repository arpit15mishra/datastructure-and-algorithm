#include<bits/stdc++.h>
using namespace std;

bool ready[1000];
int value[1000];
int coins[5]={1,3,5,7,9};

int solve(int x){
    if(x< 0) return 1000;
    if(x==0) return 0;
    if(ready[x]) return value[x];
    int best = 1000;
    for(auto c: coins){
        best = min(best,solve(x-c)+1);
    }
    value[x] = best;
    ready[x] = true;
    return best;
}

int main(){
    int n;
    cout<<"available coins with us are:";
    cout<<endl;
    for(auto a:coins){cout<<a<<" ";}
    cout<<endl;
    for(auto a:ready){a = false;}
    cout<<"enter the money for which you want minimum number of coins:";
    cin>>n;
    cout<<solve(n);
    return 0;

}
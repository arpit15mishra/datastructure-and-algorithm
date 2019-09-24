#include<bits/stdc++.h>
using namespace std;

bool ready[1000];
int value[1000];
int coins[5]={1,3,5,7,9};
int first[1000];

int solve(int x){
    value[0]=0;
    for(int i = 1; i<=x; i++){
        value[i]=1000;
        for(auto c:coins){
            if(i-c>=0&&value[i]>value[i-c]+1){
                value[i] = value[i-c]+1;
                first[i] =c;
            }
            
        }
    }
    return value[x];
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
    cout<<endl;
    cout<<"all the used coins is:";
    while(n>0){
        cout<<first[n]<<" ";
        n-=first[n];
    }
    return 0;

}
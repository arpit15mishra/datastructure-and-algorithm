#include<bits/stdc++.h>
using namespace std;
int countit[1000];
int coins[5]={1,3,5,7,9};

int solve(int x){
    countit[0]=1;
    for(int i = 0 ; i <= x;i++){
        for(auto c:coins)
        if(i-c>=0){
            countit[i]+=countit[i-c];
        }

    }

    return countit[x];


}

int main(){
    int n;
    cout<<"available coins with us are:";
    cout<<endl;
    for(auto a:coins){cout<<a<<" ";}
    cout<<"enter the money for which you want minimum number of coins:";
    cin>>n;
    cout<<"total number of ways in which coins can be used to produce x is: "<<solve(n);
    return 0;

}
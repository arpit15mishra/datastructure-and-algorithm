#include<bits/stdc++.h>
using namespace std;
vector<int> arr = {3,4,1,7};

int solve(int x ){
    if(x==0) return 0;
    if(x<0) return 1000;
    int best = 1000;
    for(auto c:arr){
        cout<<best<<" ";
        best = min(best, solve(x-c)+1);
    }

    return best;
}


int main(){
    int n;
    cout<<"Enter the total money for which you want min number of coins:";
    cin>>n;
    cout<<solve(n);
    return 0;
}
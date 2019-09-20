#include<bits/stdc++.h>
using namespace std;
vector<int> all;

void Kstring(int n , int k){
    if(k==0) {for(int i =0 ; i < 4; i++ ){cout<<all[i]<<" ";};
              cout<<endl;
              return;}
    else{
        for(int i = 0; i < n ; i++){
            all.push_back(i);
            Kstring(n,k-1);
            all.pop_back();
        }
    }
}

int main(){
    Kstring(7,4);
    return 0;
}

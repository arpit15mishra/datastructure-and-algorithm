/* to go through all the subset of a set using recursion*/

#include<bits/stdc++.h>
using namespace std;
vector<int> subset;
int counter=0;
vector<int> S;
void print(vector<int> arr){
    for(int i = 0 ; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void search(int k){
    if(k==5){
        counter++;
    }else{
        search(k+1);
        subset.push_back(k);
        search(k+1);
        subset.pop_back();

    }
}

void search2(int n){
    if(n==0){
        counter++;
    }else{
        S.push_back(n);
        search2(n-1);
        S.pop_back();
        search2(n-1);
    }

}
int main(){
    search2(5);
    cout<<counter;
    return 0;
    
}
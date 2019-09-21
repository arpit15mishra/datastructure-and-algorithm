/* to go through all the subset of a set without using recursion*/

#include<bits/stdc++.h>
using namespace std;
vector<int> permutation;
void print(vector<int> arr){
    for(int i = 0 ; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n = 5;
    int counter=0;

for(int i = 0 ; i < n ; i++){
    permutation.push_back(i);
}do{
    counter++;
}while(next_permutation(permutation.begin(),permutation.end()));
    cout<<counter;
    return 0;
    
}
/* to go through all the permutation of a set using recursion*/

#include<bits/stdc++.h>
using namespace std;
vector<int> subset;
int counter =0;

vector<char> allvalues = {'A','B','C','D','E'};
vector<char> permutation;
void print(vector<char> arr){
    for(int i = 0 ; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int n = 5;
bool chosen[5] = {false,false,false,false,false};
void search(){

    if(permutation.size() == n){
        print(permutation);
        counter++;
    }else {
        for(int i = 0; i < n; i++){
            if(chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(allvalues[i]);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}



int main(){
    vector<char> subset;
    int n = 5;
    search();

    return 0;
    
}
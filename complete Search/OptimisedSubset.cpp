/* to go through all the subset of a set without using recursion*/

#include<bits/stdc++.h>
using namespace std;
vector<int> subset;
int counter=0;
void print(vector<char> arr){
    for(int i = 0 ; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){
    vector<char> subset;
    int n = 5;
    char a[] = {'A','B','C','D','E'};
    for(int b = 0; b< (1<<n);b++){
        subset.clear();
        for(int i =0 ; i < n; i++){
            if(b&(1<<i)) subset.push_back(a[i]);
        }
        print(subset);
    }
    return 0;
    
}
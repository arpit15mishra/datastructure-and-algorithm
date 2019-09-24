#include<bits/stdc++.h>
using namespace std;

int main(){
    int array[]={6,2,5,1,7,4,8,3};
    int length[]={1,1,1,1,1,1,1,1};
    int n=8;
    int maxi = 0;
    for(int k = 0; k < n; k++){
        length[k] = 1;
        for(int i = 0; i<k; i++){
            if(array[i]<array[k]){
                length[k]=max(length[k],length[i]+1);
                if(length[k]>maxi){maxi=length[k];}
            }
        }

    }

    {
        cout<<"largest maximum sequence in the array is :"<<maxi;
    }
}
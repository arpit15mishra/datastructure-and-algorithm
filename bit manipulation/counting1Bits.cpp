#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned int n;
    unsigned int counter = 0;
    cout<<"Enter the number whose number of 1 bits are to found: ";
    cin>>n;
    while(n){
        counter++;
        n&=(n-1);
    }

    cout<<counter;

    return 0;
}
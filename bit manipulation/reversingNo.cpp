#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned int n , nReverse;

    cout<<"enter the number you want to reverse : ";
    cin>>n;
    nReverse = n;

    int s = sizeof(n);
    for(;n;n>>=1){
        nReverse <<= 1;
        nReverse |= (n&1);
        s--;

    }

    nReverse <<= s;
    cout<<"the reverse of the number is : ";
    cout<<nReverse;
}
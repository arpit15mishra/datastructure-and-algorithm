#include<bits/stdc++.h>
using namespace std;

void TowersOfHanoi(int n, char frompeg, char topeg,char auxpeg){
    if(n==1){
        cout<<"move disk 1 from peg "<<frompeg<<" to peg "<<topeg<<endl;
        return;
    }
    TowersOfHanoi(n-1,frompeg,auxpeg,topeg);

    cout<<"move disk "<<n<<" from peg "<<frompeg<<" to peg "<<topeg<<endl;

    TowersOfHanoi(n-1,auxpeg,topeg,frompeg);
}

int main(){
    int n;
    cout<<"enter the no of disk placed in tower of hanoi: ";
    cin>>n;
    TowersOfHanoi(n,'A','B','C');
    return 1;
}


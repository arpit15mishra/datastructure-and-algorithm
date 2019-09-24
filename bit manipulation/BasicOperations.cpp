#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout<<"choose two numbers :";
    cin>>a;
    cin>>b; 
    cout<<endl<<"bitwise of a and b is : "<<((a)&(b))<<endl;
    cout<<"bitwise or of a and b is : "<<(a | b)<<endl;
    cout<<"bitwise ex-or of a and b : "<<(a ^ b)<<endl;
    cout<<"bitwise left shift a and b : "<<(a << 2)<<endl;
    cout<<"bitwise right shift a and b : "<<(a >> 2)<<endl;
    cout<<"bitwise complement of a : "<<~a;
     return 0;

}
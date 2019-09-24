#include<bits/stdc++.h>
using namespace std;

int main(){
    int b,n;
    cout<<"Enter the number:";
    cin>>b;
    cout<<"Enter the bit you want to set :";
    cin>>n; 
    cout<<"number after setting the n th bit:";
    cout<<(b | (1<<n-1))<<endl;
    cout<<"number after clearing nth bit: ";
    cout<<(b&~(1<<n-1))<<endl;
    cout<<"number after toggling nth bit: ";
    cout<<(b^(1<<n-1))<<endl;
    cout<<"Toggling rightmost bit 1 : ";
    cout<<(b&(b-1))<<endl;
    cout<<"isolating rightmost one bit : ";
    cout<<(b&(-b))<<endl;
    cout<<"isolating rightmost zero bit: ";
    cout<<(~b&(b+1))<<endl;
    cout<<"checking whether number is power of 2 or not : ";
    cout<<(n&(n-1))<<endl;
    cout<<"multiplying number by power of 2: ";
    cout<<(b<<n)<<endl;
    cout<<"dividing number by zero : ";
    cout<<(b>>n)<<endl;
    cout<<"finding modulo of a given number i.e %8 : ";
    cout<<(b&0x7)<<endl;

    
     return 0;

}
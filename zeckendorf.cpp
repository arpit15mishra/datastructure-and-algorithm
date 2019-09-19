#include<bits/stdc++.h>
using namespace std;

vector<int> all;
vector<int> fib(1000,-1);

int fibonacci(int n){
    if(n==1) {fib[1] = 1;
              return 1;}
    if(n==2) {
        fib[2]=1;
        return 1;
    }
    if(fib[n]!=-1) return fib[n];
    else {
           fib[n] = fibonacci(n-1)+fibonacci(n-2);
           return fib[n];
    }   
}

int zeckendorf(int number){
    if(number==0) return 0;
    int check;
    for(int i = 1 ;  ; i++){
        check = zecendorf(number-fibonacci(i));
        if(check==0) {
            all.push_back(i);
            return 0;
        }

    }
    return -1;
}

int main(){
    int a;
    cout<<"Enter any number : ";
    cin>>a;
    cout<<zeckendorf(a);
    
}

#include<bits/stdc++.h>
using namespace std;
int A[5];
void Binary(int n ){
    if(n<1) {
        for(int i = 0 ; i < 5; i++){
            cout<<A[i];
        }
        cout<<endl;
    }
    else {
        A[n-1]==0;
        Binary(n-1);
        A[n-1] = 1;
        Binary(n-1);
    }
}

int main(){
    Binary(5);

    return 0;

}
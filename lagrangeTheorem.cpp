#include<bits/stdc++.h>
using namespace std;

vector<int> all;

int lagrange(int number,int count){
    if(number!=0&&count==0) return -1;
    else if(count==0) return 0;
    int check;
    for(int i = 1 ; i <= number;i++){
        check = lagrange(number-pow(i,2),count-1);
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
    if(lagrange(a,4)) cout<<"Not found!!";
    else cout<<"Found!!";
    for_each(all.begin(),all.end(),[](int a){cout<<a<<" ";});
}

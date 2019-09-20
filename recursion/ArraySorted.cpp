#include<bits/stdc++.h>
using namespace std;

int isArraySortedOrder(vector<int> A,int n){
    if(n==1) return 1;
    return (A[n-1]<A[n-2])?0:isArraySortedOrder(A,n-1);
}

int main(){
    string a;
    getline(cin,a,'\n');
    vector<std::string> tokens;
    string token;
    istringstream tokenStream(a);
   while (getline(tokenStream, token, ' '))
   {
      tokens.push_back(token);
   }
   vector<int> numbers;
   for(int i = 0 ; i < tokens.size();i++){
       numbers.push_back(stoi(tokens[i]));
   }
    for_each(numbers.begin(),numbers.end(),[](int a){cout<<a<<" ";});
    if(isArraySortedOrder(numbers,numbers.size())) cout<<"the array is already sorted ";
    else cout<<"array is not sorted!!";

    return 0;


}
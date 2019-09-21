/*to generate all possible ways of placing max number of queen on checkboard*/
#include<bits/stdc++.h>
using namespace std;
int counter = 0;
vector<vector<int>> arr = {{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
int checkCol(vector<vector<int>> &arr,int j){
    for(int i = 0 ; i < arr.size(); i++){
        if(arr[i][j]==1) return 0;
    }
        for(int i = 0 ; i < arr.size(); i++){
        arr[i][j]=1;
    }
    return 1;
}

int checkRow(vector<vector<int>> &arr,int i){
    for(int j = 0 ; j < arr[0].size(); j++){
        if(arr[i][j]==1) return 0;
    }
        for(int j = 0 ; j < arr[0].size(); j++){
        arr[i][j]=1;
    }
    return 1;
}


int checkDiag1(vector<vector<int>> &arr,int i,int j){
    for(int k =i+1  ; j < k; k=(++k)%arr.size()){
        if(arr[k][k]==1) return 0;
    }
        for(int k = i+1 ; k < i; (++k)%arr.size()){
        arr[k][k]=1;
    }
    return 1;
}

int checkDiag2(vector<vector<int> > &arr,int i,int j){
    for(int k =i+1  ; j < k; k=(++k)%arr.size()){
        if(arr[k][arr.size()-k]==1) return 0;
    }
        for(int k = i+1 ; k < i; (++k)%arr.size()){
        arr[k][arr.size()-k]=1;
    }
    return 1;
}




void search(vector<vector<int> > arr,int y){
    if(y==0){counter++;
        return;
    }
    for(int i = 0 ; i < arr.size(); i++){
        for(int j = 0; j < arr[0].size(); j++){
        if(!arr[i][j]&&checkCol(arr,j)&&checkRow(arr,i)&&checkDiag1(arr,i,j)&&checkDiag2(arr,i,j)){
            search(arr,y-1);
        }
        }
    }
}

int main(){
    search(arr,1);
    cout<<counter;
    return 0;

}


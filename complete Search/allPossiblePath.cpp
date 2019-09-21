#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> arr = {{0,0},{0,0}};
int n = arr.size();
int counter=0;
void print(vector<vector<int>> arr){
    for(int i = 0 ; i < arr.size(); i++){
        for(int j = 0; j < arr.size();j++){
            if(arr[i][j]==0) cout<<(char)(32);
            if(arr[i][j]==1) cout<<(char)(219);

        }
    }
    cout<<endl<<endl;
    cout<<"---------------------------------------";
    cout<<endl;
}

void AllPaths(int x,int y){
    if(y==(n-1)&&x==(n-1)) {
        arr[x][y]=1;
        print(arr);
        cout<<"Destination is reached!! for "<<counter+1<<" time.";
        counter++;
    return;
}else if(arr[x][y]==1||x==n||y==n||x<0||y<0) return;
 {
    arr[x][y]=1;
    print(arr);
    AllPaths(x+1,y);
    AllPaths(x,y+1);
    AllPaths(x-1,y);
    AllPaths(x,y-1);
    arr[x][y]=0;
}

}

int main(){
    AllPaths(0,0);
    cout<<"Everything is fine";
    cout<<counter;
    return 0;
}
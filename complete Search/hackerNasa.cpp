#include<bits/stdc++.h>
using namespace std;

int arr[30][120];
int counter=0;
void print(){
    for(int j = 0 ; j<30;j++){
    for(int i = 0 ; i < 120; i++){
        if(arr[i][j]==0){cout<<(char)(219);}
        else 
        if(arr[i][j]==1){cout<<(char)(32);}
    }
    }
    system("cls");
    }

void AllPaths(int x,int y){
if(y==(30-1)&&x==(120-1)) {
        arr[x][y]=1;
        print();
        counter++;
    return;
}
    if(x>=30||y>=120||x<0||y<0) return;
    if(arr[x][y]==1) return;
 
    arr[x][y]=1;
    print();
    AllPaths(x+1,y);
    AllPaths(x,y+1);
    AllPaths(x-1,y);
    AllPaths(x,y-1);

    arr[x][y]=0;
    print();

}

int main(){
    for(int j = 0 ; j<30;j++){
    for(int i = 0 ; i < 120; i++){
        arr[i][j]=0;
    }
    }
    AllPaths(0,0);
    cout<<"Everything is fine";
    cout<<counter;
    return 0;
}
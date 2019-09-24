#include<bits/stdc++.h>
using namespace std;

int arr[5][5] = {{1,2,3,4,5},{2,3,4,5,6},{1,2,3,4,5},{2,3,4,5,6},{1,2,3,4,5}};
void calculateSum(){
    for(int i = 0 ; i < 5; i++){
        for(int j = 0 ; j < 5; j++){
            if(i-1>=0) arr[i][j] += arr[i-1][j];
            if(j-1>=0) arr[i][j] += arr[i][j-1];
            if((j-1>=0)&&(i-1>=0)) arr[i][j] -= arr[i-1][j-1]; 
        }
    }
}
void Print(){
for(int i = 0 ; i < 5; i++){
        for(int j = 0 ; j < 5; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int sumOf(int x , int y){
    return arr[x][y];
}

int main(){

    int x1,y1,x2,y2;

    calculateSum();
    Print();

    cout<<"Enter the span of rectangle of which you want to find the sum: ";
    cout<<"x1:";
    cin>>x1;
    cout<<"y1:";
    cin>>y1;
    cout<<"x2: ";
    cin>>x2;
    cout<<"y2: ";
    cin>>y2;


    int sum;
    sum = sumOf(x2,y2)-sumOf(x2,y1-1)-sumOf(x1-1,y2)+sumOf(x1-1,y1-1);

    cout<<"the sum of the element in the rectangle are : "<<sum;

}
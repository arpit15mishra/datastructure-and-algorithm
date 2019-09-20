/*to calculate the number of ways in which L shaped tile can be 
use to cover entire rectangle*/

#include <bits/stdc++.h>

using namespace std;
int check(vector<string> &grid){
    for(int i = 0; i < grid.size();i++){
        for(int j = 0;j<grid[0].length();j++){
            if(grid[i][j]!='#') return 0;
        }
    }
    return 1;
}

vector<string> split_string(string);
void undoplace1L(vector<string> &grid,int i , int j ){
        grid[i].replace(grid[i].begin()+j,grid[i].begin()+j+2,"..");
        grid[i+1].replace(grid[i+1].begin()+j,grid[i+1].begin()+j+1,".");
        grid[i+2].replace(grid[i+2].begin()+j,grid[i+2].begin()+j+1,".");
}

void undoplace2L(vector<string> &grid, int i , int j ){
    
        grid[i].replace(grid[i].begin()+j,grid[i].begin()+j+2,"..");
        grid[i+1].replace(grid[i+1].begin()+j+1,grid[i+1].begin()+j+2,".");
        grid[i+2].replace(grid[i+2].begin()+j+1,grid[i+2].begin()+j+2,".");
}

void undoplace3L(vector<string> &grid,int i , int j ){
        grid[i].replace(grid[i].begin()+j,grid[i].begin()+j+1,".");
        grid[i+1].replace(grid[i+1].begin()+j,grid[i+1].begin()+j+1,".");
        grid[i+2].replace(grid[i+2].begin()+j,grid[i+2].begin()+j+2,"..");
    
}

void undoplace4L(vector<string> &grid,int i , int j  ){
    
        grid[i].replace(grid[i].begin()+j+1,grid[i].begin()+j+2,".");
        grid[i+1].replace(grid[i+1].begin()+j+1,grid[i+1].begin()+j+2,".");
        grid[i+2].replace(grid[i+2].begin()+j,grid[i+2].begin()+j+2,"..");
    
}

void undoplace5L(vector<string> &grid, int i , int j ){
    
        grid[i].replace(grid[i].begin()+j,grid[i].begin()+j+3,"...");
        grid[i+1].replace(grid[i+1].begin()+j+2,grid[i+1].begin()+j+3,".");
    
}

void undoplace6L(vector<string> &grid, int i, int j ){
    
        grid[i].replace(grid[i].begin()+j,grid[i].begin()+j+3,"...");
        grid[i+1].replace(grid[i+1].begin()+j,grid[i+1].begin()+j+1,".");
    
}

void undoplace7L(vector<string> &grid, int i , int j ){
    
        grid[i+1].replace(grid[i+1].begin()+j,grid[i+1].begin()+j+3,"...");
        grid[i].replace(grid[i].begin()+j+2,grid[i].begin()+j+3,".");
    
}

void undoplace8L(vector<string> &grid, int i , int j ){
    
        grid[i].replace(grid[i].begin()+j,grid[i].begin()+j+1,".");
        grid[i+1].replace(grid[i+1].begin()+j,grid[i+1].begin()+j+3,"...");
}

int place1L(vector<string> &grid,int i, int j ){
    if(i+2>=grid.size()||j+1>=grid[0].length()) return 0;
    if(grid[i][j]=='.'&&grid[i][j+1]=='.'&&grid[i+1][j]=='.'&&grid[i+2][j]=='.'){
        grid[i].replace(grid[i].begin()+j,grid[i].begin()+j+2,"##");
        grid[i+1].replace(grid[i+1].begin()+j,grid[i+1].begin()+j+1,"#");
        grid[i+2].replace(grid[i+2].begin()+j,grid[i+2].begin()+j+1,"#");
        return 1;
    }
    return 0;
}

int place2L(vector<string> &grid,int i, int j ){
    
    if(i+2>=grid.size()||j+1>=grid[0].length()) return 0;
    if(grid[i][j]=='.'&&grid[i][j+1]=='.'&&grid[i+1][j+1]=='.'&&grid[i+2][j+1]=='.'){
        grid[i].replace(grid[i].begin()+j,grid[i].begin()+j+2,"##");
        grid[i+1].replace(grid[i+1].begin()+j+1,grid[i+1].begin()+j+2,"#");
        grid[i+2].replace(grid[i+2].begin()+j+1,grid[i+2].begin()+j+2,"#");
        return 1;
    }
    return 0;
}

int place3L(vector<string> &grid,int i, int j ){
    
    if(i+2>=grid.size()||j+1>=grid[0].length()) return 0;
    if(grid[i][j]=='.'&&grid[i+1][j]=='.'&&grid[i+2][j]=='.'&&grid[i+2][j+1]=='.'){
        grid[i].replace(grid[i].begin()+j,grid[i].begin()+j+1,"#");
        grid[i+1].replace(grid[i+1].begin()+j,grid[i+1].begin()+j+1,"#");
        grid[i+2].replace(grid[i+2].begin()+j,grid[i+2].begin()+j+2,"##");
        return 1;
    }
    return 0;
}

int place4L(vector<string> &grid,int i, int j ){
    
    if(i+2>=grid.size()||j+1>=grid[0].length()) return 0;
    if(grid[i][j+1]=='.'&&grid[i+1][j+1]=='.'&&grid[i+2][j+1]=='.'&&grid[i+2][j]=='.'){
        grid[i].replace(grid[i].begin()+j+1,grid[i].begin()+j+2,"#");
        grid[i+1].replace(grid[i+1].begin()+j+1,grid[i+1].begin()+j+2,"#");
        grid[i+2].replace(grid[i+2].begin()+j,grid[i+2].begin()+j+2,"##");
        return 1;
    }
    return 0;
}

int place5L(vector<string> &grid,int i, int j ){
    
    if(i+1>=grid.size()||j+2>=grid[0].length()) return 0;
    if(grid[i][j]=='.'&&grid[i][j+1]=='.'&&grid[i][j+2]=='.'&&grid[i+1][j+2]=='.'){
        grid[i].replace(grid[i].begin()+j,grid[i].begin()+j+3,"###");
        grid[i+1].replace(grid[i+1].begin()+j+2,grid[i+1].begin()+j+3,"#");
        return 1;
    }
    return 0;
}

int place6L(vector<string> &grid,int i, int j ){
    
    if(i+1>=grid.size()||j+2>=grid[0].length()) return 0;
    if(grid[i][j]=='.'&&grid[i+1][j]=='.'&&grid[i][j+1]=='.'&&grid[i][j+2]=='.'){
        grid[i].replace(grid[i].begin()+j,grid[i].begin()+j+3,"###");
        grid[i+1].replace(grid[i+1].begin()+j,grid[i+1].begin()+j+1,"#");
        return 1;
    }
    return 0;
}

int place7L(vector<string> &grid,int i, int j ){
    
    if(i+1>=grid.size()||j+2>=grid[0].length()) return 0;
    if(grid[i+1][j]=='.'&&grid[i+1][j+1]=='.'&&grid[i+1][j+2]=='.'&&grid[i][j+2]=='.'){
        grid[i+1].replace(grid[i+1].begin()+j,grid[i+1].begin()+j+3,"###");
        grid[i].replace(grid[i].begin()+j+2,grid[i].begin()+j+3,"#");
        return 1;
    }
    return 0;
}

int place8L(vector<string> &grid,int i, int j ){
    
    if(i+1>=grid.size()||j+2>=grid[0].length()) return 0;
    if(grid[i][j]=='.'&&grid[i+1][j]=='.'&&grid[i+1][j+1]=='.'&&grid[i+1][j+2]=='.'){
        grid[i].replace(grid[i].begin()+j,grid[i].begin()+j+1,"#");
        grid[i+1].replace(grid[i+1].begin()+j,grid[i+1].begin()+j+3,"###");
        return 1;
    }
    return 0;
}


/*
 * Complete the brickTiling function below.
 */
int brickTiling(vector<string> grid) {
    int counter=0;
    for(int i = 0 ; i < grid.size();i++){
        for(int j = 0 ; j < grid[1].length();j++){
            if(grid[i].at(j)=='.'){

            if(place1L(grid,i,j)==1) {
                if(check(grid)) counter++;
                else counter += brickTiling(grid);
                undoplace1L(grid,i,j);
            }
            
            if(place2L(grid,i,j)==1) {
                if(check(grid)) counter++;
                else counter += brickTiling(grid);
                undoplace2L(grid,i,j);
            
            }
            
            if(place3L(grid,i,j)==1) {
                if(check(grid)) counter++;
                else counter += brickTiling(grid);
                undoplace3L(grid,i,j);
            
            }

            if(place4L(grid,i,j)==1) {
                if(check(grid)) counter++;
                else counter += brickTiling(grid);
                undoplace4L(grid,i,j);
            
            }
            
            if(place5L(grid,i,j)==1) {
                if(check(grid)) counter++;
                else counter += brickTiling(grid);
                undoplace5L(grid,i,j);
            
            }
            
            if(place6L(grid,i,j)==1) {
                if(check(grid)) counter++;
                else counter += brickTiling(grid);
                undoplace6L(grid,i,j);
            
            }
            
            if(place7L(grid,i,j)==1) {
                if(check(grid)) counter++;
                else counter += brickTiling(grid);
                undoplace7L(grid,i,j);
            
            }
            
            if(place8L(grid,i,j)==1) {
                if(check(grid)) counter++;
                else counter +=brickTiling(grid);
                undoplace8L(grid,i,j);
            
            }
            }
       }
    }

    return counter;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string nm_temp;
        getline(cin, nm_temp);

        vector<string> nm = split_string(nm_temp);

        int n = stoi(nm[0]);

        int m = stoi(nm[1]);

        vector<string> grid(n);

        for (int grid_itr = 0; grid_itr < n; grid_itr++) {
            string grid_item;
            getline(cin, grid_item);

            grid[grid_itr] = grid_item;
        }

        int result = brickTiling(grid);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

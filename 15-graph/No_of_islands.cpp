#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// for 8 direction

vector<int>bfs(vector<vector<int>>&vis,int row,int col,vector<vector<int>>&grid){
    int n=grid.size();
  int m=grid[0].size();

  vis[row][col]=1;
   queue<pair<int,int>>q;

  q.push({row,col});

  while(!q.empty()){
int row=q.front().first;
int col=q.front().second;
q.pop();

for(int delrow=-1;delrow<=1;delrow++){
  for(int delcol=-1;delcol<=1;delcol++){
    int nrow=row+delrow;
    int ncol=col+delcol;

    if(nrow>=0 &&  nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1 && !vis[nrow][ncol]){
      vis[nrow][ncol]=1;
      q.push({nrow,ncol});
    }
}
  }
}
return{};
}

int island(vector<vector<int>>&grid){
  int n=grid.size();
  int m=grid[0].size();
  vector<vector<int>>vis(n,vector<int>(m,0));
  int cnt=0;

   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(!vis[i][j]&&grid[i][j]==1){
        cnt++;
        bfs(vis,i,j,grid);
      }
    }
   }
return cnt;


}
int main() {
    vector<vector<int>> grid = {
        {1,1,0,0},
        {1,0,1,0},
        {0,0,1,1},
        {1,0,0,0}
    };

    cout << "Number of islands = " << island(grid) << endl;
}
// 4 direction 
/*class Solution {
    private:

    vector<int>bfs(vector<vector<int>>&vis,int row,int col,vector<vector<char>>&grid){
    int n=grid.size();
  int m=grid[0].size();

  vis[row][col]=1;
   queue<pair<int,int>>q;

  q.push({row,col});
   int dr[4] = {-1, 0, 1, 0};
    int dc[4] = {0, 1, 0, -1};


  while(!q.empty()){
int row=q.front().first;
int col=q.front().second;
q.pop();
      
        for (int k = 0; k < 4; k++) {
            int nrow = row + dr[k];
            int ncol = col + dc[k];


    if(nrow>=0 &&  nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){
      vis[nrow][ncol]=1;
      q.push({nrow,ncol});
    }
}
  }

return{};
}

public:
    int numIslands(vector<vector<char>>& grid) {
  int n=grid.size();
  int m=grid[0].size();
  vector<vector<int>>vis(n,vector<int>(m,0));
  int cnt=0;

   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(!vis[i][j]&&grid[i][j]=='1'){
        cnt++;
        bfs(vis,i,j,grid);
      }
    }
   }
return cnt;


}
    
};
*/

/*
class Solution {
private:

vector<int> bfs(vector<vector<int>>& vis, int row, int col, vector<vector<char>>& grid) {

    int n = grid.size();
    int m = grid[0].size();

    vis[row][col] = 1;
    queue<pair<int,int>> q;
    q.push({row, col});

    while (!q.empty()) {

        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        // explore 4 directions using your double loop style
        for (int delrow = -1; delrow <= 1; delrow++) {
            for (int delcol = -1; delcol <= 1; delcol++) {

                // allow only UP, DOWN, LEFT, RIGHT
                if (abs(delrow) + abs(delcol) != 1)
                    continue;

                int nrow = r + delrow;
                int ncol = c + delcol;

                if (nrow >= 0 && nrow < n &&
                    ncol >= 0 && ncol < m &&
                    grid[nrow][ncol] == '1' &&
                    !vis[nrow][ncol]) 
                {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }

    return {}; // unused, but keeps your function signature
}

public:
int numIslands(vector<vector<char>>& grid) {

    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> vis(n, vector<int>(m, 0));
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if (!vis[i][j] && grid[i][j] == '1') {
                cnt++;
                bfs(vis, i, j, grid);
            }
        }
    }

    return cnt;
}

};
*/
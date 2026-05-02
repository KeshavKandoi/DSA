// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;

// vector<int> bfsOfGraph(int v , vector<vector<int>> &adj){
//   vector<int>vis(v,0);
//   vis[1]=1;
    
//   queue<int>q;
//   q.push(1);
  
//  vector<int>bfs;

//   while(!q.empty()){
// int node=q.front();
//   q.pop();
//   bfs.push_back(node);

//   for(auto it:adj[node]){
//     if(!vis[it]){
//       vis[it]=1;
//       q.push(it);
//     }
//   }
//   }

// return bfs;

// }

// int main(){
//   int n,m;
//   cout<< " enter the n and m "<<endl;
//   cin>>n>>m;

//   vector<vector<int>>adj(n+1);

//   for(int i=0;i<m;i++){
//     int u,v;
//     cout<< " enter u and v "<<endl;
//     cin>>u>>v;
   

//     adj[u].push_back(v);
//      adj[v].push_back(u);   

//   }
//   vector<int> ans= bfsOfGraph(n+1,adj);


//   for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<< " ";
//   }
//   return 0;
// }


#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int>vec(vector<vector<int>>&list,int v){
    vector<int>adj(v+1,0);
    adj[1]=1; // 1 based indexing 

    queue<int>q;
    q.push(1);
    vector<int>bfs;

    while(!q.empty()){
        int node=q.front();
        bfs.push_back(node);
        q.pop();

        for(auto it:list[node]){
            if(!adj[it]){
                adj[it]=1;
                q.push(it);
                
            }
        }


    }
    return bfs;


}

int main(){
    int n,m;
    cout<<"enter the value of node(n) and edge(m)"<<endl;
    cin>>n>>m;

    vector<vector<int>>list(n+1);

    for(int i=0;i<m;i++){
        int u,v;
        cout<<"enter the value of u and v"<<endl;
        cin>>u>>v;

        list[u].push_back(v);
        list[v].push_back(u);

    }
    vector<int>ans=vec(list,n);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

}
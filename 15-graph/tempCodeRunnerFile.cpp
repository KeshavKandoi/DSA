
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int>vec(vector<vector<int>>&list,int v){
    vector<int>adj(v,0);
    adj[0]=1;

    queue<int>q;
    q.push(0);
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

    vector<vector<int>>list(n);

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
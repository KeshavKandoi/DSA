//  disjoint set

// UNION BY RANK

#include<iostream>
#include<vector>

using namespace std;

class DisjointSet{
  vector<int> rank ,parent;

  public:
  DisjointSet(int n){
    rank.resize(n+1,0);
    parent.resize(n+1);
    for(int i=0;i<=n;i++){
      parent[i]=i;
    }

  }
  int findUPar(int node){
    if(node==parent[node]){
      return node;
    }

     return  parent[node]=findUPar(parent[node]);


  }

  void UnionByRank(int u ,int v){
    int ultimateParent_u=findUPar(u);
     int ultimateParent_v=findUPar(v);

    if(ultimateParent_u==ultimateParent_v) return;

    if(rank[ultimateParent_u]< rank[ultimateParent_v]){
      parent[ultimateParent_u]=ultimateParent_v;

    }
 else if(rank[ultimateParent_u]> rank[ultimateParent_v]){
      parent[ultimateParent_v]=ultimateParent_u;
  }

  else {   // (rank[u] == rank[v])
    parent[ultimateParent_u]=ultimateParent_v;
    rank[ultimateParent_v]++;
  }
  }
};
int main() {

    int n = 7;
    DisjointSet ds(n);

    ds.UnionByRank(0, 1);
    ds.UnionByRank(1, 2);
    ds.UnionByRank(3, 4);
    ds.UnionByRank(5, 6);
    ds.UnionByRank(2, 6);

    // Check if two nodes are in the same set
    if (ds.findUPar(0) == ds.findUPar(6))
        cout << "0 and 6 are in the same set\n";
    else
        cout << "0 and 6 are in different sets\n";

    if (ds.findUPar(3) == ds.findUPar(5))
        cout << "3 and 5 are in the same set\n";
    else
        cout << "3 and 5 are in different sets\n";

    return 0;
}

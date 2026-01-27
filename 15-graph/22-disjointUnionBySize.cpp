

// UNION BY SIZE

#include<iostream>
#include<vector>

using namespace std;

class DisjointSet{
  vector<int> size ,parent;

  public:
  DisjointSet(int n){
    size.resize(n+1,1);
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

  void UnionBySize(int u ,int v){
    int ultimateParent_u=findUPar(u);
     int ultimateParent_v=findUPar(v);

        if(ultimateParent_u==ultimateParent_v) return;

          if(size[ultimateParent_u]< size[ultimateParent_v]){
      parent[ultimateParent_u]=ultimateParent_v;
      size[ultimateParent_v]+=size[ultimateParent_u];
          }

          else if (size[ultimateParent_u] > size[ultimateParent_v]) {
        parent[ultimateParent_v] = ultimateParent_u;
        size[ultimateParent_u] += size[ultimateParent_v];
    }
      else {                             //  size[ultimateParent_u] == size[ultimateParent_v]
            parent[ultimateParent_v] = ultimateParent_u;
            size[ultimateParent_u] += size[ultimateParent_v];
        }
    }
};

int main() {

    int n = 7;
    DisjointSet ds(n);

    ds.UnionBySize(0, 1);
    ds.UnionBySize(1, 2);
    ds.UnionBySize(3, 4);
    ds.UnionBySize(5, 6);
    ds.UnionBySize(2, 6);

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

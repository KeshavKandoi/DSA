#include<iostream>
using namespace std;

class TreeNode{
  public:
  int data;
  TreeNode*left;
  TreeNode*right;
  
  TreeNode(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
  }
};
void heapify(vector<int>&arr,int n,int i){
    int largest=i;
    int left=(i*2)+1;
    int right=(i*2)+2;

        if(left<n && arr[largest]<arr[left]){
      largest=left;
    }

    if(right<n && arr[largest]<arr[right]){
      largest=right;
    }
    if(largest!=i){
      swap(arr[i],arr[largest]);
       heapify(arr, n, largest);
    }
  }
  
vector<int> mergeHeap(vector<int> a,vector<int>b){ // 0 based indexing hai
 
 vector<int>ans;
for(auto i:a){
  ans.push_back(i);
}
for(auto i:b){
  ans.push_back(i);
}
 int n = ans.size();
for(int i=(n/2-1);i>=0;i--){
  heapify(ans,n,i);
}
return ans;
}



 int main(){
    int n, m;
    cout << "Enter size of first heap: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter elements of first heap:\n";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cout << "Enter size of second heap: ";
    cin >> m;

    vector<int> b(m);
    cout << "Enter elements of second heap:\n";
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    vector<int> result = mergeHeap(a, b);

   cout << "Merged Max Heap: ";
for(int i = 0; i < result.size(); i++){
    cout << result[i] << " ";
}
    return 0;
}


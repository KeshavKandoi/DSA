// 496. Next Greater Element I

#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>


using namespace std;

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        stack<int>st;
        unordered_map<int,int>mp;

        for(int i=n-1;i>=0;i--){

            while(!st.empty()&&st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()){
              mp[nums2[i]]=-1;
            }
            else{
                mp[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
        }

        vector<int>ans;

        for(auto x:nums1){
            ans.push_back(mp[x]);
        }
        return ans; 

      }

int main(){
  int n1,n2;
  cout<<"enter the no of element in first array"<<endl;
  cin>>n1;
  cout<<"enter the no of element in second array"<<endl;
  cin>>n2;

  vector<int>one(n1);
  vector<int>two(n2);


  cout<<"Enter the value of first array"<<endl;

  for(int i=0;i<n1;i++){
    cin>>one[i];
  }
cout<<endl;
  cout<<"The array is "<<endl;
  for(int i=0;i<n1;i++){
    cout<<one[i]<<" ";
  }
  cout<<endl;

  cout<<"Enter the value of second array"<<endl;

  for(int i=0;i<n2;i++){
    cin>>two[i];
  }

  cout<<"The array is "<<endl;
  for(int i=0;i<n2;i++){
    cout<<two[i]<<" ";
  }

  cout<<endl;

  vector<int>ans;

  ans=nextGreaterElement(one,two);

  cout<<"The answer is-:";
  for(auto x:ans){
    cout<<x<<" ";
  }


}
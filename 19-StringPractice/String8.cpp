// 14. Longest Common Prefix

#include<iostream>
#include<vector>
using namespace std;


 string longestCommonPrefix(vector<string>& strs) {

        string ans="";

        for(int i=0;i<strs[0].size();i++){

            char ch=strs[0][i];

            for(int j=1;j<strs.size();j++){

                if(i>strs[j].size()||strs[j][i]!=ch){
                    return ans;
                }
               
            }
             ans+=ch;


        }
        return ans;
        
    }


int main(){
  int n;
  cout<<"Enter the no of value in array"<<endl;
  cin>>n;
  vector<string>arr(n);


 cout<<"Enter the string"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];

  }

  string value=longestCommonPrefix(arr);

  cout<<"The common prefix is  "<<value;
}
/*
#include<iostream>
#include<vector>
using namespace std;

int print(string s){
  int maxlength=0;
  for(int i=0;i<s.size();i++){
    int hash[256]={0};
    for(int j=i;j<s.size();j++){
    if(hash[s[j]]==1){
      break;
    }
   int  length=j-i+1;
    maxlength=max(maxlength,length);
    hash[s[j]]=1;
    }
  }
  return maxlength;
}
int main(){
  
  string s;
  cout<< " enter the string " <<endl;
  cin>>s;
  cout<<print(s)<<endl;


}

*/

#include<iostream>
#include<vector>

using namespace std;

int lengthOfLongestSubstring(string s) {

int l=0;
int r=0;
int maxlength=0;
int n=s.size();
int hash[256]={0};

while(r<n){
 while (hash[s[r]] == 1) {
    hash[s[l]] = 0;
    l++;
}
  int length=r-l+1;
maxlength= max(length,maxlength);
hash[s[r]]=1;
r++;
}
return maxlength;
}
int main(){
  
  string s;
  cout<< " enter the string " <<endl;
  cin>>s;
  cout<<lengthOfLongestSubstring(s)<<endl;


}
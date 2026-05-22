// 1614. Maximum Nesting Depth of the Parentheses
#include<iostream>

using namespace std;

int maxDepth(string s) {

  int n=s.size();
  int depth=0;
  int maxi=0;

  for(int i=0;i<n;i++){
    if(s[i]=='('){
       depth++;
       maxi=max(maxi,depth);

    }
    else if(s[i]==')'){
      depth--;

    }

  }
  return maxi;

}


int main(){
  string s;
  cout<<"Enter the value of String s"<<endl;
  cin>>s;

  int k=maxDepth(s);

  cout<<"The max Depth  is "<<'"'<<k<<'"';

}
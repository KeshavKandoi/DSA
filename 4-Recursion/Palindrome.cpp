#include<iostream>
using namespace std;

bool print(string s, int l, int r){
  if(l>=r){
    return true;
  }

  if(s[l]!=s[r]){
    return false;

  }
  return print(s,l+1,r-1);
}



int main(){
  string s;
  cout<< " Enter the string ";
  cin>>s;
  cout<< print( s,0,s.size()-1);





}
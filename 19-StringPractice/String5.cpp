// 205. Isomorphic Strings

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool isIsomorphic(string s, string t) {

  int one=s.size();
  int two=t.size();

  if(one!=two){
    return false;

  }

   unordered_map<char,int> s1;
   unordered_map<char,int> s2;

for(int i=0;i<one;i++){


  if(s1[s[i]]!=s2[t[i]])
  return false;

  s1[s[i]]=i+1;
  s2[t[i]]=i+1;

}



return true;

}


int main(){
  string s,t;

  cout<<"Enter the value of String S and String T"<<endl;
  cin>>s>>t;


bool IsValue=isIsomorphic(s,t);

if(IsValue){
  cout<<"True";

}
else{
  cout<<"False";
}


}
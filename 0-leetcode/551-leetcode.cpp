#include<iostream>
#include<string>
using namespace std;
bool checkRecord(string s) {

  int count = 0;
for(int i = 0; i < s.size(); i++){
    if(s[i] == 'A'){
        count++;
    /*
int countA=0;
for(char c:s){
  if(c=='A'){
    countA++;
  
  if(countA>=2){
  return false;
  }
}
}
    */

if(count >= 2){
    return false;
}
}
}
if(s.size()>=3){
for(int i=0;i<=s.size()-3;i++){
  if(s[i]=='L'&& s[i+1]=='L' && s[i+2]=='L'){
    return false;
  }
}
}
    return true;
  
}
  
/*

if (s.find("LLL") != string::npos) {
    return false; // Not eligible
}
*/
  
  int main(){
    string s;
    cout<<" Enter the string ";
    cin>>s;



   checkRecord(s);
   cout<<checkRecord(s);

  }





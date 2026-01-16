#include<iostream>
#include<string>
using namespace std;

string removeDuplicates(string s) {
        int i=0;
        while( i<s.length()-1){
            if(s[i]==s[i+1]){
                s.erase(i,2);
            if(i>0){
                i--;
            }
           } else{
                i++;
            }
    }
    return s;
}
int main(){
  string s;
  cout<< " Enter the String";
  cin>>s;
  cout<< " The Final String is " << removeDuplicates(s) <<endl;
}
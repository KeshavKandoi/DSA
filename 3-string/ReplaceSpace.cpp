#include<iostream>
#include<string>
using namespace std;

string Replace(string s){
  for(int i=0;i<s.length();i++){
    if(s[i]==' '){
      s[i]='@';
    }
    }
    return s;
}
    int  main(){
    string s;
      cout<< " Enter the String " ;
      getline(cin,s);
  
      cout<< " The replaced string is " << Replace(s) << endl;
  
  }


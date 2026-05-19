// 796. Rotate String

#include<iostream>

using namespace std;


bool rotateString(string s, string goal) {

        if(s.size()!=goal.size()){
            return false;
        }

        string doubled=s+s;

        int check=doubled.find(goal);

        if(check==-1){
            return false;
        }
        return true;
    
}


int main(){
  string s;
  string goal;
  cout<<"Enter the string"<<endl;
  cin>>s;
   cout<<"Enter the string"<<endl;
  cin>>goal;

  bool value=rotateString(s,goal);

  if(value==true){
    cout<< "true";
  }
  else{
    cout<<"false";
  }

  
}
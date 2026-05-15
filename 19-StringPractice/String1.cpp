// Revserse String

#include<iostream>
#include<vector>
using namespace std;


void reverseString(vector<char>& s) {

int n=s.size();
    int i=0;

    while(i<n){
        swap(s[i],s[n-1]);
        i++;
        n--;
    }

    for(auto x:s){
      cout<<x;
    }
    cout << endl;
   
    }

int main(){
  int n;
  cout<<"Enter the size of the string"<<endl;
  cin>>n;

  vector<char>s(n);

  cout<<"enter the value of the string"<<endl;

  for(int i=0;i<n;i++){
    cin>>s[i];

  }
  
  cout<<"The value of the string is "<<endl;

  for(int i=0;i<n;i++){
    cout<<s[i];

  }
  cout<<endl;

  cout<<"The reverse value is "<<endl;
  reverseString(s);
  return 0;


}



//  Power of Two

#include<iostream>

using namespace std;

bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }

        while(n>1){
         if(n%2!=0){

         return false;
         }
         n=n/2;

        }
        return true;
        
    }
int main(){
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;

  bool value=isPowerOfTwo(n);

  if(value==true){
    cout<<"true";
  }
  else{
    cout<<"false";
  }
}
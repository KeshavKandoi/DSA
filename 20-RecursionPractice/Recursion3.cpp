// 326. Power of Four
#include<iostream>
using namespace std;

    bool isPowerOfFour(int n) {

        if(n<=0){
            return false;
        }

        while(n>1){
            if(n%4!=0){
                return false;
            }
            n=n/4;
        }
        return true;
    }
int main(){
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;

  bool value=isPowerOfFour(n);

  if(value==true){
    cout<<"true";
  }
  else{
    cout<<"false";
  }
}
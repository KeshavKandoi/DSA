// 326. Power of Three
#include<iostream>
using namespace std;

    bool isPowerOfThree(int n) {

        if(n<=0){
            return false;
        }

        while(n>1){
            if(n%3!=0){
                return false;
            }
            n=n/3;
        }
        return true;
    }
int main(){
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;

  bool value=isPowerOfThree(n);

  if(value==true){
    cout<<"true";
  }
  else{
    cout<<"false";
  }
}
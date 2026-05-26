// 1922. Count Good Numbers
#include<iostream>

using namespace std;


long long mod = 1e9 + 7;

      long long power(long long x ,long long n){
     

  

            long long power=n;
            long long  result=1;


            while(power>0){

                if(power%2==1){
                    result=(result*x)%mod;
                }
                x=(x*x)%mod;
                power=power/2;

            }
            return result;
        }

         int countGoodNumbers(long long n) {

    
            long long  even=(n+1)/2;
            long long  odd=(n/2);

            return (power(5,(n+1)/2)*power(4,(n/2)))%mod;
        
        
    }


  int main(){
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;


  int  value=countGoodNumbers(n);

 cout<<"The value is "<<value<<endl;
}
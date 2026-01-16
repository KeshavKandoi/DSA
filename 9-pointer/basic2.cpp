#include<iostream>
using namespace std;

int main(){
  
  int arr[10]={2,5,6,3,2};

  cout<< " the address is " <<arr<<endl;
    cout<< " the address is " <<&arr<<endl;
  cout<< " the address is  " <<&arr[0] <<endl;

cout<< " 1-the value is " <<*arr<<endl;
cout<< " 2-the value is " <<*arr+1<<endl;
cout<< " 3-the value is " <<*(arr+2)<<endl;
cout<< " 4-the value is " <<(*arr)+1<<endl;

cout<< " 5-the value is  " <<arr[2]<<endl;
cout<< " 6-the value is " <<*(arr+2)<<endl;
 }
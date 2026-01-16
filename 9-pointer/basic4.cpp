#include<iostream>
using namespace std;

int main(){
  int arr[10]={1,2,3,4,5,6,7};
  char ch[10]="abcde";

  cout<< arr<<endl;
      cout<< arr[0]<<endl;
          cout<< *arr <<endl;

  cout<< ch<<endl;


  char *c=&ch[0];
  cout<< c <<endl;

    cout<< *c <<endl;


    char temp='z';
    char *x=&temp;

    cout<< x <<endl;
        cout<< *x <<endl;


}
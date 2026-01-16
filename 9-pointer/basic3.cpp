#include<iostream>
using namespace std;

int main(){
  int arr[10]={23,41,54,56,65};

  cout<< "size of array " <<sizeof(arr)<<endl;

  int *p=&arr[0];

  cout<< " size of ptr "<<sizeof(p)<<endl;
   cout<< " size of ptr "<<sizeof(*p)<<endl;
    cout<< " size of ptr "<<sizeof(&p)<<endl;


}
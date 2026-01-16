#include<iostream>
using namespace std;

int main(){
int num=5;

cout<< " The num  is " << num <<endl;

cout<< " The address is " << &num<<endl;

int *p=&num;
cout<< " value is " <<*p<< endl;
cout<< " the address is " << p <<endl;


int *q=p;
cout << "the q is " << *q<<endl;
cout<<" the adress is " <<q << "-" <<p <<endl;

int i=6;
int *z=&i;
cout<< "  before  value  " <<*z<< endl;
(*z)++;
cout<< "   after value  " <<*z<< endl;


}
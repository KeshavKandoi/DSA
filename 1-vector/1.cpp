#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(25);
     vec.push_back(35);
      vec.push_back(45);
       vec.push_back(55);
       
       vec.pop_back();
       cout<<" The Size of the Vector" <<" is "<< vec.size() <<endl;
       cout<<"The numbers are "<<endl;
       for(auto i:vec){
           cout<<i<<endl;
       }
       
    return 0;
}
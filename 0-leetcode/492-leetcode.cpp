#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> Rectangle(int area) {
  int w = (int)floor(sqrt(area));
    for (; w >= 1; --w) {
        if (area % w == 0) {
            int L = area / w;
            int W = w;
            return {L, W}; 
        }
    }
    return {area, 1}; 
}
int main (){
  int area;
  cout << " Enter the area:- " ;
  cin>> area;

 
  vector<int> ans = Rectangle(area);

   cout << "The length and width of the rectangle is "
         << ans[0] << " " << ans[1] << endl;

    return 0;
}
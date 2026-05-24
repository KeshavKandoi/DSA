// 50. Pow(x, n)

 #include<iostream>
 using namespace std;

    double myPow(double x, int n) {
        long long power = n;
        double result = 1.0;

        if (power < 0) {
            x = 1.0 / x;
            power = -power;
        }

        while (power > 0) {
            if (power % 2 == 1) {
                result *= x;
            }

            x = x * x;
            power = power / 2;
        }

        return result;
    }

int main(){
  int n,x;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
   cout<<"Enter the value of x"<<endl;
  cin>>x;

  double  value=myPow(x,n);

 cout<<"The value is "<<value<<endl;
}
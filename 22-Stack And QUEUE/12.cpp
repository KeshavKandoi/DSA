// prefixToPostfix
#include<iostream>
#include<stack>
#include <algorithm>

using namespace std;
    string prefixToPostfix(const string& s) {
        int n=s.size();
        int i=n-1;
          stack<string>st;


        while(i>=0){
             if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9'){
                st.push(string(1,s[i]));
            }
            else{
                    
            string t1=st.top();
            st.pop();
           string t2=st.top();
            st.pop();

            st.push((t1)+(t2)+string(1,s[i]));
            }
            i--;
        }
             return st.top();
        }
 

int main() {
    string s;

    cout << "Enter the string: ";
    cin >> s;

     cout << prefixToPostfix(s);

    return 0;


}

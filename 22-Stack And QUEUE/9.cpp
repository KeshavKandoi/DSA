// postToInfix

#include<iostream>
#include<stack>
#include <algorithm>

using namespace std;
  string postToInfix(string s) {
int n = s.size();
        int i=0;
        stack<string>st;

        while(i<n){

            if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9'){
                st.push(string(1,s[i]));
            }
            else{

            string t1=st.top();
            st.pop();
           string t2=st.top();
            st.pop();

            st.push("("+(t2)+string(1, s[i])+(t1)+")");
            }
            i++;
        }
            return st.top();
        
    }


int main() {
    string s;

    cout << "Enter the string: ";
    cin >> s;

     cout <<  postToInfix(s);

    return 0;


}
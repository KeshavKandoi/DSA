// prefixToInfix

// In **Prefix to Infix** and **Prefix to Postfix** conversion, we scan the expression **from right to left** because the **operator appears before its operands**. Scanning from the right ensures that when an operator is encountered, its two operands are already available on the stack. We can then pop the operands, combine them, and push the result back onto the stack.

#include<iostream>
#include<stack>
#include <algorithm>

using namespace std;


    string prefixToInfix(string s) {
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

            st.push("("+(t1)+string(1,s[i])+(t2)+")");
            }
            i--;
        }
        return st.top();



        }
    

int main() {
    string s;

    cout << "Enter the string: ";
    cin >> s;

     cout <<  prefixToInfix(s);

    return 0;


}
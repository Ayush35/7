#include<iostream>
#include<stack>
#include<string>
#include<math.h>
using namespace std;

int prefixEvaluation(string s){
    stack<int> st;
    for(int i = 0; i<s.length(); i++){
        if(s[i]>='0' && s[i] <='9'){
            st.push(s[i]-'0');
            // cout<<st.top()<<" ";
        }
        else{
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();

            switch(s[i]){
                case '+':
                    st.push(op1+op2);
                    break;
                case '-':
                    st.push(op1-op2);
                    break;
                case '*':
                    st.push(op1*op2);
                    break;
                case '/':
                    st.push(op1/op2);
                    break;
                case '^':
                    st.push(pow(op1, op2));
                    break;
                defalut:
                    break; 
            }
        }
    }
    return st.top();
}

int main(void){
    cout<<prefixEvaluation("46+2/5*7+")<<endl;
}
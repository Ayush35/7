#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool checkBracket(){}
bool open(char s){
    if(s=='{'){
        return true;
    }
    else if(s=='['){
        return true;
    }
    else if(s=='('){
        return true;
    }
    return false;
}
bool close(char c, char s){
    string op = "{[(";
    string cl = "}])";
    int idx = op.find(c);
    if(s == cl[idx]){
        return true;
    }
    return false;
}
void display(stack<char> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

bool checkBalance(string s){
    stack<char> st;
    for(int i = 0; i <s.length(); i++){
        if(open(s[i])){
            st.push(s[i]);
        }
        else if(close(st.top(),s[i])){
            st.pop();
        }
    }
    return st.empty();
}


int main(){
    cout<<checkBalance("{{()}}");
    return 0; 
}
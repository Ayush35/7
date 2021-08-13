#include <iostream>
#include <string>
#include <stack>
using namespace std;

int preced(char c)
{
    if (c == '+' || c == '-')
    {
        return 1;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '^')
    {
        return 3;
    }
    else
    {
        return -1;
    }
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

string IntoPostfix(string s)
{
    stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            res += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && preced(st.top()) > preced(s[i]))
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty() ){
        res+= st.top();
        st.pop();
    }
    return res;
}


string reverse(string s){
    stack<char> st;
    for(int i=0; i<s.length(); i++)
    {
        st.push(s[i]);
    }
    string res;
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}

string intopre(string s){
    string res = reverse(s);
    for(int i=0; i<s.length(); i++){
        if(res[i] == '('){ 
            res.replace(i,1, ")");
        }
        else if(res[i] == ')'){ 
            res.replace(i,1, "(");
        }
        i++;
    }
    cout<<res<<endl;    
    res = IntoPostfix(res);
    res = reverse(res);  
    return res;  
}

int main(void)
{
    // cout<<IntoPostfix("(a-b/c)*(a/k-l)");
    cout<<intopre("(a-b/c)*(a/k-l)")<<endl;
}
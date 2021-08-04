#include<iostream>
#include<String>
using namespace std;

string stringDupli(string str){
    if(str.length() == 0){
         return str;
    }

    char ch = str[0];
    string ans = stringDupli(str.substr(1));

    if (ch == ans [ 0]){
        return ans;
    }
    return (ch+ans);
}

int main(void){
    cout<<stringDupli("aaaaaabbbbbeeeeeedddd");
}
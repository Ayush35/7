#include<iostream>
#include<String>
using namespace std;

string substring(string str){
    if(str.empty()) 
    {
        return "";
    }
    substring(str.substr(1));
    int n = 0 ;
    do{
        cout<<str.substr(0,n+1)<<endl;
        n++;
    }while(n != str.length());
        
    return str;
}

int main(void){
    string str = "ABC";
    substring(str);
 
}
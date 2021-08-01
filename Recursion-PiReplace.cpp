#include<iostream>
using namespace std;

int replace(string  str1 , string str2, int i){
    while(str1.find("pi")>-1){
    int ind = str1.find("pi");
    str1.replace(ind,2,str2);
    replace(str1,str2,i+1);
    }
    return 0;
}

int main(void){
    string str1 = "pi pi";
    string str2 = "3.14";
    // cout<<str1.find("pi");
    // str1.replace(0,2,str2);
    replace(str1,str2,0);
    cout<<str1;
}
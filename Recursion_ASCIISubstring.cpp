#include<iostream>
#include<String>
using namespace std;

string ascSub(string str){
    if(str.empty()){
        cout<<endl;
        return "";
    }
    string rest = ascSub(str.substr(1));
    cout<<str[0]<<endl;
    cout<<int(str[0])<<endl;
    return str;
}
int main(void){
    ascSub("AB");
}
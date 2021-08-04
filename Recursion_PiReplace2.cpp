#include<iostream>
#include<String>
using namespace std;

int replace(string str){
    if(str.empty()){
        return 0 ; 
    }
    if(str[0] == 'p' && str[1] == 'i'){
        cout<<"3.14";
        replace(str.substr(2));
    }
    else{
        cout<<str[0];
        replace(str.substr(1));
    }
    return 0;
}
int main(void){
    replace("pi piefawjfsjsa;fdpiadfsnkdjsapi  pi");
}
#include<iostream>
#include<String>
using namespace std;
int main(void) {
    string str = "askfadsjfasflk";

    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i]-=32;
        } 
    }
    cout<<"Upper : - "<<str<<endl;
    
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i]+=32;
        } 
    }
    cout<<"Lower - "<<str;
}

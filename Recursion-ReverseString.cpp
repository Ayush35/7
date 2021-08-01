#include<iostream>
#include<string>
using namespace std; 

string rever(string str , int i =0){
    while(i !=str.length()){
        string rest = rever(str, i+1);
        if(i== str.length()){
            return rest;
        }
        cout<<rest[i];
        return rest;
    }
}

int main(void){
    string str = "Ayush";
    rever(str, 0);
}
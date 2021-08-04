#include<iostream>
#include<String>
using namespace std;

void move1(string str, int n){
   if(n==0){
       cout<<str;
       return ;
   } 
   if(str[0]== 'x' ){
     str.push_back('x');
   }
   else{
       cout<<str[0];
   }
   move1(str.substr(1),n-1);
}

int main(void){
    string str = "axxbdxcefxhix";
    move1(str , str.length());
}
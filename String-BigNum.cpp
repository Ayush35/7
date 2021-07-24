#include<iostream>
#include<String>
#include<algorithm>
using namespace std;

string BigNum(string &str){
    sort(str.begin(), str.end() , greater<int>());
    return str;
}
int main(void){
    string str = "983438247";
    BigNum(str);
    cout<<str;
}
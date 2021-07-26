#include<iostream>
using namespace std;

int main(void){
    int n1 = 42 , n2 = 24;
    int num=24;
    while(num!=0){
        num = n1%n2;
        n1 = n2;
        n2 = num;
    }
    cout<<n1;
}
#include<iostream>
using namespace std;

int checkPower(int n){
    return !(n && (n&n-1));
}

int main(void) {
    cout<<checkPower(16);
}
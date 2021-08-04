#include<iostream>
using namespace std;

int tillingways(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    return tillingways(n-1) + tillingways(n-2);
}

int main(void) {
    cout<<tillingways(2);
}
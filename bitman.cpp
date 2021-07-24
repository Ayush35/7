#include<iostream>
using namespace std;

int getBit(int n, int pos){
    return ((n&(1<<pos))!=0);
}

int setBit(int n , int pos){
    return (n |(1<<pos));
}

int clearbit(int n, int pos){
    int mask = ~(1<<pos);
    return(n&mask);
}
int updatebit(int n, int pos ,int value){
    int mask = ~(1<<pos);
    n = n & mask;
    return n|(value<<pos);
}

int main(void) {
    cout<<getBit(7,4)<<endl;
    cout<<setBit(5,1)<<endl;
    cout<<clearbit(6,1)<<endl;
    cout<<updatebit(5,1,1)<<endl;
}

#include<iostream>
using namespace std;

int pairingWays(int n){
   if(n==0 || n==1 || n==2 )
   {
       return n;
   }
    return pairingWays(n-1) + pairingWays(n-2)*(n-1);
}
int main(void) {
    cout<<pairingWays(4);
}
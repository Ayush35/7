#include<iostream>
using namespace std;

int main(void){
    int n = 50;
    int prime[100]={0};
    for(int i= 2 ; i<=n ; i++){
        if(prime[i] == 0){
            for(int j = i*i ; j<= n ; j += i ){
                prime[j] = i;
            }
        }
    }
    cout<<"Enter Integer : - "<<endl;
    int spf = 42    ;
    while(spf>1){
        if(prime[spf]>0){
            cout<<prime[spf]<<" ";
            spf = spf/prime[spf];
        }
        else if(prime[spf] == 0){
            cout<<spf;
            spf = 1;
        }
    }
}
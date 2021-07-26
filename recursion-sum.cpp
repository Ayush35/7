#include<iostream>
using namespace std;

int sum(int n)
{
    int sun =0 ;
    if(n!=0)
         sun = n+sum(n-1);
    else if(n==0){
        return 0;
    }
    return sun;
}
int power(int n, int p){
    if(p==0){
        return 1;
    }
    int mult = n * power(n,p-1);
    return mult;
}
int factorial(int n){
    if(n == 1){
        return 1;
    }
    return (n * factorial(n-1) );
}
int fibonac(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return (fibonac(n-1)+fibonac(n-2));
}
int main(void){
    int n= 4;
    cout<<sum(n)<<endl;
    int p = 2 ;
    for(int i = 1; i<8 ; i++)
        cout<<power(2,i)<<" ";
    cout<<endl;
    cout<<factorial(9)<<endl;
    for(int i = 0; i<17   ; i++)
        cout<<fibonac(i)<<" ";
    cout<<endl;
}
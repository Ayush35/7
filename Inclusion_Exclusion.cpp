#include<iostream>
using namespace std;
int main ( void ){
    int arr[40];
    int n1 = 0 , n2 = 0 , n3 = 0;
    int n = 1000;
    int a = 5;
    int b = 7;
    n1 = n/a;
    n2 = n/b;
    n3 = n/(a*b);   
    cout<< n1+n2-n3;
}
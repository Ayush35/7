#include<iostream>
using namespace std;

int inc(int n){
    if(n==0){
        cout<<n<<" ";
        return 0;
    }
    else{
        inc(n-1);
        cout<<n<<" ";
        return 0;
    }
}

int dec(int n){
    if(n==0){
        cout<<n<<" ";
    }
    else{
        cout<<n<<" ";
        dec(n-1);
    }
    return 0;
}

int main(void){
    inc(19);
    cout<<endl;

    dec(19);
}
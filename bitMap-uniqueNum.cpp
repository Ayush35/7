#include<iostream>
using namespace std;

int setBit(int n, int pos){
    return ((n&(1<<pos))!=0);   
}   
int unique(int arr[],int n){
    int xorsum = 0;
    for(int i =0 ; i < n ; i++){
        xorsum = xorsum ^ arr[i];
        cout<<xorsum<<" ";
    }
    cout<<endl;
    // return xorsum;
    int setbit = 0 ;
    int pos = 0 ;
    // int temp 
    int temp = xorsum;
    while(setbit != 1){
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum>>1;
    }
    int newxorsum = 0;

    for(int i = 0 ; i < n ; i++){
        if(setBit(arr[i], pos-1)){
            newxorsum = newxorsum ^ arr[i];
        }
    }
    cout<<"num 1= "<<newxorsum<<endl;
    temp = newxorsum ^ temp;
    cout<<"num 2= "<<temp<<endl;
    return 0;
}
     
int main(void){
    int arr[] = {1,2,3,1,2,3,5,7};
    unique(arr,8);
}
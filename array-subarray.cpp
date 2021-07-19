#include<iostream>
using namespace std;

int subarray(int n , int arr[], int S)
{
    int sum = 0; 
    int sub[2]= {0,0};
    for(int i = 0; i <n ; i++){
        sum += arr[i];
        sub[1] = i;
        if(sum>S){
            sum = sum - arr[sub[0]] - arr[i];
            sub[0]++;
            i--;
        } 
        else if(sum == S){
            cout<<sub[0]<<" "<<sub[1]<<endl;
            break;
        }
    }
    return 0;
}
int main(void) {
    int n = 4  , S =5;
    int arr[n]= {1,2,3,8};
    subarray(n,arr,S);
}
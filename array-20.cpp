#include<iostream>
using namespace std;

int rearrage(int arr[],int n)
{
    int k = 0;
    int arr1[n];
    for(int i = 0 ; i<n ;i++){
        if( (i+k) == 0){
            if(arr[i] == -3000){k--;}

            else if(arr[i] > 0){
                arr1[i] = arr[i];
            }

            else if(arr[i]<0){
                int j =1;
                while(j<n){
                    if(arr[i+j] > 0){
                        arr1[i+k] = arr[i+j];
                        arr[i+j] = -3000;
                        k=1;
                        i-=1;
                        break;
                    }
                    else {j++;}
                }
            }
        }
        else if((i+k)%2 != 0){
            if(arr[i] == -3000){k--;}

            else if(arr[i] < 0){
                arr1[i+k] = arr[i];
            }

            else if(arr[i]>=0){
                int j =1 ;
                while((i+j)<= n ){
                    if(arr[i+j+1] == -3000)
                        {j++;}
                    else if( (i+j+1) == n ){
                        arr1[i+k] = arr[i];
                    }
                    else if(arr[i+j] < 0){
                        arr1[i+k] = arr[i+j];
                        arr[i+j] = -3000;
                        k=1;
                        i-=1;
                        break;
                    }
                    else {j++;};
                }
            }
        }
        else if((i+k)%2 == 0 && (i+k) != 0){
            if(arr[i] == -3000){k--;}

            else if(arr[i] >= 0){
                arr1[i+k] = arr[i];
            }
            else if(arr[i]<0){
                int j =1 ;
                while((i+j) < n){
                    if(arr[i+j] > 0){
                        arr1[i+k] = arr[i+j];
                        arr[i+j] = -3000;
                        k=1;
                        i-=1;
                        break;
                    }
                    else{j++;};
                }
            }
        }
    }
    for(int i = 0 ; i< n ; i++){
        cout<< arr1[i] << "  ";
    }
    return 0;
}
int main()
{
    int n= 9 ;
    int arr[n]= {5,6,-4,-776,-243,12,9};
    rearrage(arr ,n);
    return 0;
}
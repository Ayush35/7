#include<iostream>
using namespace std;


int knapsack(int wt[], int value[],int n , int w){
    if(n==0 || w==0) 
    {
        return 0;
    }

    if(wt[n-1]>w){
        return knapsack(wt, value , n-1 ,w);
    }
    return max(knapsack(wt , value , n - 1 , w- wt[n-1]) + value[n-1] , knapsack(wt, value , n-1 ,w) );
}

int main(){
    int wt[] = {10,20,30};
    int value[] = {100,50,150};
    cout<<knapsack(wt,value,3,50);
}
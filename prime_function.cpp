#include<iostream>
using namespace std;

int main()
{
    int n=137,temp =0;
    int i=0,value=0;
    while(n!=0)
    {
        temp = n%10;
        temp*=8^i;
        cout<<(8^i)<<endl;
        value+=temp;
        // cout<<value<<endl;
        i++;
        n=n/10;
    }
    cout<<"Value :- "<<value;
    return 0;
}
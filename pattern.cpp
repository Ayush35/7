#include<iostream>
using namespace std;
int main()
{
    int temp = 370,num=0;
    int n=temp;


    while(n!=0)
    {
        int var=n%10;
        num=num+(var*var*var);
        n=n/10;
    }
    if(num==temp)
    {
        cout<<"Armstrong num";
    }
    else
    {
        cout<<"Not";
    }
    return 0;
}
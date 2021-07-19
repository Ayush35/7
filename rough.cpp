#include<iostream>
using namespace std;
int main()
{
    int a=5,b=2;
    for(int i = 0; i<10;i++)
    {
        if(i==5 && i!=b)
            cout<<"TRUE";
    }
    return 0;
}
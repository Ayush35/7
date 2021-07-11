#include<iostream>
#include<unordered_map>
using namespace std;

int findfun(int arr[],int n,int k)
{
    int c = 0;
    unordered_map<int, int> m;
        
    for(int i= 0 ; i<n ;i++)
    {
        int x = k - arr[i];
            
        if(m[x] == 0){
            m[arr[i]]++;
        }
        else{
                
            c+= m[x];
                
            m[arr[i]]++;
        }
        m.at(arr[i]);
        cout<<endl;
    }
    return c;
}
int main()
{
    int n = 4, k = 6;
    int arr[n]={1,5,7,1};
    int p=findfun(arr,n,k);
    cout<<p;
    return 0;

}
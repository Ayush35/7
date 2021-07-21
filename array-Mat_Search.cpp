#include <iostream>
using namespace std;
int main()
{
    int n =4;
    int arr[4][4]= {{1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17}};
    int k =22;
    bool flag = false;
    int row =3;
    int column =0;
    while(flag == false){
        // cout<<"running";
        if(arr[row][column] == k ){
            cout<<row<<" "<<column<<endl;
            cout<<arr[row][column];
            break;
        }
        else if(arr[row][column] > k ){
            if(row==0){
                flag = true;
                break;
            }
            row--;
        }
        else if(arr[row][column]<k){
            if(column==n-1){
                flag = true;
                break;
            }
            column++;
        }
    }
    if(flag == true)
        cout<<"failed";
    return 0;
}
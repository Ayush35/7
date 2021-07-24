#include<iostream>
#include<String>
#include<algorithm>
using namespace std;

string freq(string &str){
    int frq[26];
    for(int i=0; i<26 ; i++){
        frq[i] = 0;
    }
    char ans = 'a';
    int maxf =0 ;
    for(int i = 0; i<str.size(); i++){
        frq[str[i]-'a']++;
        if(maxf<frq[str[i]-'a']){
            maxf = frq[str[i]-'a'];
            ans = str[i];
            cout<<maxf<<" ";
        }
    }
    cout<<endl;
    cout<<maxf<<" "<<ans<<endl;
    for(int i = 0; i<26 ; i++){
        cout<<frq[i]<<" ";
    }
    // cout/<<
    return str;
}
int main(void){
    string str = "bcdebffabbbjdsfjakjkfffffffakslbvjbvbcncxmzvbnzbcjxvbvjzhxvdakdsnsendjhsejak";
    freq(str);
    cout<<str;
}
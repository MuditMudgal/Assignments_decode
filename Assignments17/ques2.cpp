#include<iostream>
using namespace std;
int main() {

    //count all consonents 
    // string s;
    // cin>>s;
    // int count1 = 0;
    // int count2 = 0;
    // for(int i=0;i<s.size();i++){
    //     //vowels
    //     if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
    //         count1++;
    //     }
    //     else {
    //         count2++;
    //     }
    // }
    // cout<<count2;


    string s;
    getline(cin,s);
    int count = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' ')  continue;
        if(s[i]=='a' || s[i]=='A')  continue;
        if(s[i]=='e' || s[i]=='E')  continue;
        if(s[i]=='i' || s[i]=='I')  continue;
        if(s[i]=='o' || s[i]=='O')  continue;
        if(s[i]=='u' || s[i]=='U')  continue;
        count++;
    }
    cout<<count;




}
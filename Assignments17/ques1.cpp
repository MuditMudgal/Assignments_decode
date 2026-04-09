#include<iostream>
using namespace std;
int main() {

    string s = "Pbwcshkuiglhlds";
    for(int i=0;i<s.size();i++){
        if(i%2!=0)  s[i] = '#';
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }




}
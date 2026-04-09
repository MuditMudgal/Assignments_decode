#include<iostream>
using namespace std;
int main() {

    string s;
    cin>>s;
    int n = s.size();
    int r = 0;
    //1 -> 49
    for(int i=0;i<n;i++){
        r = (r*10)+(s[i]-48);
    }
    cout<<r+1;

    


}
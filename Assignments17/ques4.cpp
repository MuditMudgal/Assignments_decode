#include<iostream>
#include<algorithm>
using namespace std;
int main() {

    string s;
    cin>>s;
    int half = s.size()/2;
    reverse(s.begin()+half,s.end());
    cout<<s;




}
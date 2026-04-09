#include<iostream>
using namespace std;
bool isPalindrome(string s){
    int i=0;
    int j=s.size()-1;
    bool flag = true;
    while(i<=j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            flag = false;
            break;
        }
    }
    return flag;
}
int main() {

    //palindrome String 
    string s;
    cin>>s;    
    cout<<isPalindrome(s);


}
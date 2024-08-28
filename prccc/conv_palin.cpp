#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s, int i ,int j){
    while(i<j){
        if(s[i]!=s[j]){
            return false ;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    string s;
    cin>>s;
    int i;
    int n= s.length();
    for( i =0;i<n;i++){
        if(checkPalindrome(s,i,n-1)){
            break;
        }
    }
    for(int j=i-1;j>=0;j--){
      cout<<s[j];
    }
    return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    int arr[n];
   cin>>n;
   for(int i =0; i<n ;i++){
    cin>>arr[i];
   }
   int incl=0,escl=0,mx;
   for(int i=0;i<n;i++){
    mx=max(incl,escl);
    incl = escl +arr[i];
    escl=mx;
   }
   cout <<max(incl,escl);
    return 0;
}
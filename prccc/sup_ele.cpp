#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int supEle(int *arr,int n){
    int count =0,j;
    for(int i=0;i<n;i++){
        for( j=i+1;j<n;j++){
        if(arr[i]<=arr[j])
        {
            break;
        }
        }
    
    if(j==n)
    count++;
        
}
return count;
}
int main()
{
   int *arr;
   int n;
   cout<<"enter the size"<<endl;
   cin>>n;
   cout<<"enter the inetgers"<<endl;
   for(int i=0 ;i<n;i++)
   {
    cin>>arr[i];
   }
   int out = supEle(arr,n);
   cout<<out;
   return 0;
}
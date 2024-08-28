#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxArray(int arr[],int len){
    int max =INT_MIN;
    int index=0;
    for(int i=0;i<len;i++){
        if(arr[i]>max){
           max=arr[i];
           index=i;
        }
    }
    cout <<max <<endl <<index;
}
int main()
{
   int len;
   cin>>len;
   int arr[len];
   for(int i=0;i<len;i++){
    cin>>arr[i];
   }
   maxArray(arr,len);
    return 0;
}
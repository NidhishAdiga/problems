#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"enter the size of arr"<<endl;
   cin>>n;
   int k,arr[n];
   cout<<"enter thr target value"<<endl;
   cin>>k;
   for(int i =0 ;i<n;i++){
    cin>>arr[i];
   }
   int count=0;
   for(int i=0;i<n;i++){
    if(arr[i]-arr[i+1]==k){
        count++;
    }
   }
   cout<<count<<endl;
    return 0;
}
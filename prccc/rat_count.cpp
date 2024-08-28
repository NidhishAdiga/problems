#include<iostream>
using namespace std;
int ratCount(int *arr,int n, int r ,int unit){
    int food = r*unit;
    int sum=0;
    int count =0;
    if(food==0)
    {
        return -1;
    }
    for(int i =0 ;i<n;i++){
        sum+=arr[i];
        count++;
        if(sum>=food){
        break;
        }
    }
    return count;
}
int main()
{
   int n,r,unit;
   int *arr;
   cout<<"r:";
   cin>>r;
   cout<<"unit:";
   cin>>unit;
   cout<<"n:";
   cin>>n;
   cout<<"arr:";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int out = ratCount(arr,n,r,unit);
   cout<<out;
    return 0;
}

#include<iostream>
using namespace std;
int absDiff(int *arr, int len ,int num,int diff){
     int count=0;
     for(int i=0;i<len;i++){
        if(abs(arr[i]-num)<=diff){
            count++;
        }
     }
     return count > 0 ? count:-1;
}
int main()
{
    int n;
    cout<<"n:";
    cin>>n;
    int *arr;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cout<<"num:";
    cin>>num;
    int diff;
    cout<<"diff:";
    cin>>diff;
    int out = absDiff(arr,n,num,diff);
    cout<<out;
    return 0;
}
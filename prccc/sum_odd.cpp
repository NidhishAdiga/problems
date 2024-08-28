#include<iostream>
using namespace std;
int sumOfOdd(int arr[],int n){
   int sum=0;
    for(int i=0;i<n;i++){
          if(arr[i] %2 != 0 )
        {
           sum+=arr[i];
        }  
        }
    return sum;

}
int main()
{
    int n;
    int arr[100];
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the arr elemnts"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int out = sumOfOdd(arr,n);
    cout<<out<<endl;
    return 0;
}
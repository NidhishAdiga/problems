#include<iostream>
using namespace std;
int invCount(int *a,int n){
    int count = 0;
    for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(j<k && a[j]>a[k])
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
   int n;
   int *a;
   cout<<"enter the size"<<endl;
   cin>>n;
   cout<<"enter the integers"<<endl;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   int out = invCount(a,n);
   cout<<out;
   return 0;
}
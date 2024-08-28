#include<iostream>
using namespace std;
int diffOfSum(int n,int m)
{
    int sum1=0;
    int sum2=0;
    for(int i=1;i<=m;i++){
        if(i%n!=0){
            sum1+=i;
        }
        else{
            sum2+=i;
        }
    }
   return abs(sum1-sum2);
}
int main()
{
   int n,m;
   cout<<"n:";
   cin>>n;
   cout<<"m:";
   cin>>m;
   int out = diffOfSum(n,m);
   cout<<out;
   return 0;
}
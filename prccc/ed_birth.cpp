#include<iostream>
using namespace std;
long cutPice(long n){
    const unsigned M = 1000000007;
    long sum =1;
    while(n!=0){
        sum+=n--;
    }
    return sum%M;
}
int main()
{
   long n;
   cout<<"enter the cuts"<<endl;
   cin>>n;
   long out = cutPice(n);
   cout<<out<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int countOcurranceOfDigit(int l, int u ,int x){ 
    int count =0;
    for(int i = l;i<=u;i++){
       int temp=i;
        while(temp!=0){
            if(temp%10==x)
                count++;
                temp/=10;
            
        }
    }
    return count;
}
int main()
{
   int l,u,x;
   cin>>l>>u>>x;
   int out = countOcurranceOfDigit(l,u,x);
   cout<<out;
    return 0;
}
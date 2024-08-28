#include<iostream>
using namespace std;
int main()
{
   int n,p;
   cout<<"enter the number of pages"<<endl;
   cin>>n;
   cout<<"enter the page number"<<endl;
   cin>>p;
   int min = (n/2)-(p/2);
   if(min>p/2){
    min=p/2;
   }
   cout<<min;6
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
int strCheck(string str[],int len){
    int count=0;
    string y[]={str[0]};
    string z[]={str[1]};
}
int main()
{
   string str[]={"abcd","cdab"};
   int len = sizeof(str)/sizeof(str[0]);
   int out = strCheck(str,len);
   cout<<out;
    return 0;
}

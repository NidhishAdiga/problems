#include<iostream>
using namespace std;
 bool isPalindrome(int x) {
        int y;
        if(x<0){
            return false;
        }
        long rev=0;
        long temp=x;
        while(temp!=0){
            int dig = temp%10;
            rev = rev * 10 + dig;
            temp/=10;
        }
        if(rev==x){
            return true;
        }
        return false;
    }
int main()
{
   int x= 121;
   int y= isPalindrome(x);
   cout<< y<< endl;
    return 0;
}
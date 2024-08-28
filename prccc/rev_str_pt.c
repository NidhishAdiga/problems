#include<stdio.h>
#include<string.h>
void revStr(char *arr,int *len ){
    int start =0;
    int end = *len-1;
    char temp;
    while(start<end){
        temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    char arr[] ="nidhish";
    int len = strlen(arr);
    revStr(arr,&len);
    printf("%s",arr);
    return 0;
}
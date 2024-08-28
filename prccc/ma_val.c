#include<stdio.h>
int maxValue(int*arr,int len){
    int max= arr[0];
    for(int i=0 ;i<len;i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    return max;
}
int main(){
    int arr[]={10,30,20,50};
    int len =sizeof(arr)/sizeof(arr[0]);
    int out = maxValue(arr,len);
    printf("%d",out);
    return 0;
}


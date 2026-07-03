#include<stdio.h>
void deletion(int arr[],int size,int capacity,int index){
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<size-1;i++){
        printf("%d",arr[i]);
}
}



int main(){
    int arr[100]={1,2,7,18,8};
    int size=5,capacity=100,index=2;
    deletion(arr,size,capacity,index);
return 0;
}
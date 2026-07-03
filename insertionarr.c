#include<stdio.h>
int Insertion(int arr[],int size, int element,int capacity,int index){
    if(size>capacity){
        return -1;
    } for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
int displayarr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}
int main(){
    int arr[100]={7,8,9,10,12};
    int size=5,element =31,capacity=100,index=2;
    Insertion(arr,size,element,capacity,index);
    size+=1;
    displayarr(arr,size);

    return 0;
}
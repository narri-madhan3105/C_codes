#include<stdio.h>
void sorting(int arr[],int n){
  for(int i=0;i<=n-2,i++){
   int min=i;
    for(j=i;j<=n-1;j++){
      if(arr[j]<arr[min]){
        min=j
      }
    }
  }
  int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
}
int main(){
    return 0;
}
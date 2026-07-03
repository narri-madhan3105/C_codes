#include<stdio.h>
int main(){
    int n,product=1;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        product=product*i;
    }
    printf("%d",product);
    return 0;
}
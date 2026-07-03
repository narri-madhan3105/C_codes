#include<stdio.h>
int main(){
    int x;
    printf("Enter x :");
    scanf("%d",&x);
    printf("%d",x%5==0||x%7==0);
    return 0;
}

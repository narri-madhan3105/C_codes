#include<stdio.h>
int main(){
    float num;
    printf("Enter num value:");
    scanf("%f",&num);
    float fractional= num-(int)num;
    printf("%.3f",fractional);
    return 0;
}
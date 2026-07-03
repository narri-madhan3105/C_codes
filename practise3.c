#include<stdio.h>
// int => 2/3 =0 & 2.0/3 = garbage value
// float=> 2/3= 0.000 & 2.0/3 = 0.667
int main(){
    printf("%f" , 2.0/3);
    return 0;
}
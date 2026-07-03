#include<stdio.h>
int main(){
    int num;
    printf("Enter num");
    scanf("%d",&num);
    if(num>=0){
        printf("The num is +ve \n");
        if(num%2==0){
            printf("Number is even\n");
        } else{
            printf("Number is odd\n");
        }
     } else{
            printf("The num is -ve\n");
        }
    
    return 0;
}
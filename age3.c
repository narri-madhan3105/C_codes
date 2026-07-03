#include<stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>=18){
        printf("Adult\n");
    }
    else if(age<18){
        printf("Not Adult\n");
    }
    return 0;
}
// For 2conditions only we can use both if else or if else if combinations but it is advisable to use if else combinations  
// Use if - else if for 3 or more conditions
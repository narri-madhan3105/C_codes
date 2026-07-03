#include<stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>=18){
        printf("You are an adult\n");
    }
    else if(age>12 && age<18){
        printf("You are a teenager\n");
    }
    else{
        printf("You are a child\n");
    }
    printf("THANK YOU ^~^");
    return 0;
}

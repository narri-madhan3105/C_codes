#include<stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    age>=18?printf("Adult\n"):printf("not adult\n");
    return 0;
}
// Using Ternary operator
#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks");
    scanf("%d",&marks);
    if(marks>90){
        printf("A+ GRADE");
    }
    else if(marks>80 && marks<=90){
        printf("A GRADE");
    }
    else if(marks>70 && marks<=80){
        printf("B GRADE");
    }
    else if(marks>60 && marks<=70){
        printf("C GRADE");
    }
    else{
        printf("D GRADE");
    }
    return 0;
}
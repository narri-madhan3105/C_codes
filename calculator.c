#include<stdio.h>
int main(){
    char operator;
    printf("Choose operator:");
    scanf("%c",&operator);
    int num1,num2;
    printf("Enter operands");
    scanf("%d %d",&num1,&num2);

    switch (operator)
    {
    case '+':printf("%d",num1 + num2);
        break;
    case '-':printf("%d",num1-num2);
        break;
    case '*':printf("%d",num1*num2);   
        break;
    case '/': if(num2!=0){
        printf("%d",num1/num2);
    } else{
        printf("Division not possible");
    } break;
    default:printf("Invalid command");
    }
    return 0;
}
//Simple Calculator using switch()-case [only integer values]....
#include<stdio.h>
void Indian();
void French();
int main(){
    printf("Enter country's initial\n");
    char ch ;
    scanf("%c",&ch);
if(ch=='i'){
 Indian();
}else if(ch=='f'){
 French();
}
    return 0;
}
void Indian(){
    printf("Namaste\n");
} 
void French(){
    printf("Bonjour\n");
}
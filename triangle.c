#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter x,y,z");
    scanf("%d %d %d",&x,&y,&z);
    if(x+y>z){
        printf("They make a triangle\n");
    }
    else if(y+z>x){
        printf("They make a traingle\n");
    }
    else if(x+z>y){
        printf("They make a triangle\n");
    }
    else{
        printf("They dont make a triangle -_-");
    }
}
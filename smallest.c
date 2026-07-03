#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter x,y,z:\n");
    scanf("%d %d %d", &x,&y,&z);
    if(x<=y && x<=z){
        printf("The smallest number is x");
    }
    else if(y<=x && y<=z){
        printf("The smallest number is y");
    }
    else {
            printf("The smallest number is z");
        }
        return 0;
    }
    // while giving inputs give space between inputs as there are multiple inputs
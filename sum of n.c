#include<stdio.h>
int main (){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}
// int sum=0;
   // for(int i=1;i<=4;i++){
 //       printf("%d\n",sum=sum+i);
    //} try thiss we will get sum of all first n numbers
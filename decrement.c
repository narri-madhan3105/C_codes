#include<stdio.h>
int main(){
int x=4,y=2,z;
z=x-- -y; // (x--)minus y ...first x used and then decreased z=4-2=2
printf("%d %d %d\n",x,y,z);
    return 0;
} 
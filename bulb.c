#include<stdio.h>
// Parallel connection
int main(){
    int switch1 = 1;
    int switch2 = 0;
    // In parallel connection If even one swicth is open then bulb glows 
    printf("Bulb will glow %d\n", switch1||switch2);
    return 0;
}


#include <stdio.h>
int main(){
    char name;
    printf("Enter your name: \n");
    // scanf("%c", &name);
    name= getchar();//Takes a single character input from console
    printf("Hello, %c!\n", name);
    putchar(name);// Prints a single character to console
    return 0;
}
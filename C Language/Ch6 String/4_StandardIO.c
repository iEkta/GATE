#include <stdio.h>
int main(){
    char name;
    printf("Enter your name: \n");
    // scanf("%c", &name);
    name= getchar();//Takes a single character input from console
    printf("Hello, %c!\n", name);
    putchar(name);// Prints a single character to console
    putchar(name+1);// Prints next character in ASCII table
    return 0;
}
// Output:
// Enter your name:
// Ekta
// Hello, E!
// EF (Does not print new line after E)
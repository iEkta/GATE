#include <stdio.h>
int main(){
    extern int r; // Declaration of external variable
    printf("Value of a: %d\n", r);
    return 0;
}
// int a = 10; // Definition of external variable
// Output:
// Value of a: 10
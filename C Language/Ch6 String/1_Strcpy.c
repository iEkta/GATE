//strcpy completely replaces the content of the destination string with the source string.
#include <stdio.h>
#include <string.h>// For strcpy function
int main(){
    char str1[20]="Hello, ";
    char str2[]="World!";
    // Copy str2 into str1
    strcpy(str1, str2);// str1 is destination and str2 is source string
    printf("After strcpy, str1: %s\n", str1);
    strcpy(str1, "C Programming");
    printf("After strcpy with literal, str1: %s\n", str1);// str1 is destination and literal is source string
    return 0;
}
// Output:
// After strcpy, str1: World!
// After strcpy with literal, str1: C Programming

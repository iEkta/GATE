#include <stdio.h>
int main(){
    static int a[]={41,72,33,45,59};
    static int *p[]={a, a+3, a+4, a+1, a+2};
    int **ptr=p;
    ptr +=3;
    printf("%ld %d\n", ptr-p, **ptr);      //72
    return 0;
}
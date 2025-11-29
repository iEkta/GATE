#include <stdio.h>
int main(){
    register int i=5;
    int j=6;
    printf("i= %d\n",i);
    // printf("%p",&i);//Register variables may not have a memory address
    printf("j= %p",&j);
    return 0;
}
// Output:
// i= 5
// j= 0061FECC
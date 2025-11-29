#include <stdio.h>
int fun(){
    int i=5;
    int a=i++;
    printf("%d",a);
    return i;
}
int main(){
    printf("%d\n",fun());
    printf("%d",fun()+fun());
    return 0;
}
//Output:
//56
//5512
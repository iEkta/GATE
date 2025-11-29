#include <stdio.h>
void fun(int a){
    int b;
    b=a+100;
    printf("%d\n",b);
}
int main(){
    int a=40;
    fun(a);
    printf("%d\n",a);
    return 0;
}
//Output:
//140
//40
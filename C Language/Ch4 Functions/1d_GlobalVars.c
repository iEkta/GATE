#include <stdio.h>
int a=10;
void func1(){
    printf("Current value of a is %d\n",a);
    a=a+20;
}
void func2(){
    a=a+40;
}
int main(){
    a=a+40;
    printf("%d\n",a);
    func1();
    printf("%d\n",a);
    func2();
    printf("%d\n",a);
    return 0;
}
//Output:
//Current value of a is 50
//70
//110
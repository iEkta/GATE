//Nested functions are not allowed in C11 standard
#include <stdio.h>
void fun(){
        printf("Within fun");
    }
int main(){
    int a =10;
    // void fun(){
    //     printf("Within fun");
    // }
    printf("%d\n",a);
    fun();
    return 0;
}
//Output:
//10
//Within fun
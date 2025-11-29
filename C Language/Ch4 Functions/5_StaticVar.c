#include <stdio.h>
void print(int n){
    static int i;
    if(n<=0)
        return;
    i++;
    printf("%d ",i);
    print(--n);
}
int main(){
    print(5);
    return 0;
}
//Output:
//1 2 3 4 5
#include <stdio.h>
int f1(int n){
    if(n==0||n==1)
        return n;
    else
        return(2*f1(n-1)+3*f1(n-2));
}
int main(){
    printf("%d",f1(8));
    return 0;
}
//Output: 1640
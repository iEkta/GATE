#include <stdio.h>
int main(){
    int x=1, z[2]={10,11};
    int *p=NULL;
    p=&x;
    *p=10;
    p=&z[1];
    *(&z[0]+1)+=3;
    printf("x=%d z[0]=%d z[1]=%d\n",x,z[0],z[1]);
    return 0;
}
// Output: x=10 z[0]=10 z[1]=14
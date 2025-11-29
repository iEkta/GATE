#include <stdio.h>
int main(){
    // int a[][4];//Invalid declaration
    int a[][2]={1,2,3,4,5};//Valid declaration and initialization
    printf("%d\n",a[2][1]);
    // int a1[2][]={1,2,3,4,5};//Invalid declaration and initialization
    // Mulidimensional arrays must have all dimensions except the first specified.
    return 0;
}
// Output:0
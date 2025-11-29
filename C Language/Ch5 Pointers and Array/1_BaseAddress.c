#include <stdio.h>
int main()
{
    int a[] = {11, 12, 13, 14, 15};
    //&a[1]=100; Address cannot be assigned manually
    printf("%u\n", a);     // Base address
    printf("%u\n", a + 1); // Base address + size of int
    printf("%d\n", *a);
    printf("%d\n", *a + 1);
    printf("%u\n", &a);     // Address of array i.e. base address
    printf("%u\n", &a + 1); // Address of array + size of array
    return 0;
}
// Output:
// 6422204
// 6422208
// 11
// 12
// 6422204
// 6422224
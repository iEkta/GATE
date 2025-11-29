#include <stdio.h>
int main()
{
    int a[][4] = {{11, 12, 13, 14}, {15, 16, 17, 18}};
    printf("%u\n", a);       // Base address of 2D array i.e. address of first 1d array
    printf("%u\n", a + 1);   // + size of one 1d array (4 ints= 16 bytes)
    printf("%u\n", *a);      // ADDRESS of first int
    printf("%u\n", *a + 1);  // + size of one int= 4 bytes
    printf("%d\n", **a);     // First element (11)
    printf("%d\n", **a + 1); // First element + 1 (12)
    // printf("%d\n", *(*a + 1)); // Second element of first row (12)
    return 0;
}
// Output:
// 6422192
// 6422208
// 6422192
// 6422196
// 11
// 12
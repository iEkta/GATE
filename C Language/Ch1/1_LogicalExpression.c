#include <stdio.h>
int main()
{
    int x = 1, y = 0, z = 0;
    int a = x++ || y++ && z++;
    printf("%d %d", y, z);
    return 0;
}
//Output: 0 0
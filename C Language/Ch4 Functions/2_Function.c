#include <stdio.h>
int fun(int num)
{
    int i, count = 0;
    for (int i = 1; i <= num; i = i * 2)
    {
        count++;
    }
    return count;
}
int main()
{
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum = sum + fun(100 + i * 10);
        printf("The value of sum currently is: %d\n", sum);
    }
    printf("%d", sum);
    printf("done");
    return 0;
}
//Output:
//The value of sum currently is: 7
//The value of sum currently is: 14
//The value of sum currently is: 22
//The value of sum currently is: 30
//The value of sum currently is: 38
//38done
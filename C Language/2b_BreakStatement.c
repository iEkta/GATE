#include<stdio.h>
int main(){
    int count=0,i,j;
    for (int i = 1; i <=100; i++)
    {
        for (int j = 1; j < 200; j++)
            count++;
            if (i==j)break;   
    }
    printf("%d",count);
}
//Output: 19900
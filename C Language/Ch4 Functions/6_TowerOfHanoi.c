#include <stdio.h>
int count;
void TowerOfHanoi(int n, char L,char R, char M){
    if(n>=1){
        TowerOfHanoi(n-1, L,R,M);
        printf("Move disk from %c to %c\n",L,M);
        count++;
        TowerOfHanoi(n-1, M,L,R);
    }
}
int main(){
    int n;
    printf("Enter number of disks: ");
    scanf("%d",&n);
    TowerOfHanoi(n,'L','R','M');
    printf("Total moves: %d\n",count);
}
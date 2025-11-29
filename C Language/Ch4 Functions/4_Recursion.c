#include <stdio.h>
void dos(int n){
    if(n>1)dos(n-1);
    for(int i=0;i<n;i++)
        printf("*");
    printf("\n");
}
int main(){
    // int n=5;
    dos(5);
    return 0;
}
//Output:
//*
//**
//***
//****
//*****

#include <stdio.h>
int main(){
    char stg[]="Ekta";
    printf("%u\n", &stg);// Address of array of character
    char *ch[2]={"Hello", "World"};
    printf("%u\n", ch);// Address of array of character pointer
    printf("%u\n", ch[0]);// Address of first string   
    printf("%u\n", ch[1]);// Address of second string    

    printf("%s\n", ch[0]);// ch[0]= Hello
    printf("%s\n", ch[1]);// ch[1]= World
    printf("%s\n", *ch);// *ch = ch[0] = Hello
    printf("%s\n", *(ch+1));// *(ch+1) = ch[1] = World
    printf("%s\n", *ch+1);// *ch+1 = ch[0]+1 = ello
    return 0;
}
// Output:
// 6422216
// 4214884
// 4214890
// Hello
// World
// Hello
// World
// ello
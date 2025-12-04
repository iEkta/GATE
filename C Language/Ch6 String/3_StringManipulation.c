#include <stdio.h>
#include <string.h>// String Manipulation Functions
int main(){
    char name[5]="Ekta", newname[10], surname[20]= "Choudhary";
    printf("Length of name: %d\n", strlen(name));
    printf("Before strcpy: %s\n", name);
    strcpy(newname, name);
    printf("After strcpy, newname: %s\n", newname);
    printf("strcmp result between name and newname: %d, and name and surname:%d\n",strcmp(name, newname), strcmp(name, surname));
    printf("%s",strcat(name, surname));
    return 0;
}
// Output:
// Length of name: 4
// Before strcpy: Ekta
// After strcpy, newname: Ekta
// strcmp result between name and newname: 0, and name and surname:1
// EktaChoudhary
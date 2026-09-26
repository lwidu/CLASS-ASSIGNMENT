#include <stdio.h>
#include <stdlib.h>

int main()
{
     //self check chapter 1 no.1 and 2. from C how to program

    int age;
    char name[30];

    printf("Enter name:");
    scanf(" %s",&name);
    printf("Enter age:");
    scanf("%d",&age);

    printf("My name is %s and I am %d years old. \n",name,age);
    return 0;
}

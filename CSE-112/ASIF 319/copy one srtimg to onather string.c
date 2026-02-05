#include<stdio.h>
int main()
{
    char name1[100],name2[100];
    printf("Enter any string:");
    gets(name1);
    strcpy(name2,name1);
    puts(name1);
    puts(name2);
    return 0;

}

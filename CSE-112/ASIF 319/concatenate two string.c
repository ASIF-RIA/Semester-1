#include<stdio.h>
int main()
{
    char asif1[100],asif2[100];
    printf("Enter any string:");
    gets(asif1);
    gets(asif2);
    strcat(asif1,asif2);
    puts(asif1);
}

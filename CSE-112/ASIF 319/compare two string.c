#include<stdio.h>
int main()
{
    char a;
    char string1[100],string2[100];
    printf("Enter two string:");
    gets(string1);
    gets(string2);
    a=strcmp(string1,string1);

    if(a==0)
    {
        printf("string are equal");
    }
    else if(a)
    {
      printf("string are not equal");
    }




}

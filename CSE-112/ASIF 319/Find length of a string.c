#include<stdio.h>
int main ()
{
    char string[100];
    printf("Enter any string:");
    gets(string);
    int length=strlen(string);
    printf("Length=%d\n\n",length);


    int i,count=0;
    for(i=0;string[i]!='\0';i++)
    {
        count++;
    }

    puts(string);
    printf("Length=%d",count);
    return 0;
}

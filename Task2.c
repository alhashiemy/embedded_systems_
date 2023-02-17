#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];
    char b[50];
    char c[100]={0};

    printf("\nEnter the first sentence:\n");
    gets(a);
    printf("\nEnter the second sentence:\n");
    gets(b);
    strcat(c,a);
    strcat(c," ");
    strcat(c,b);

    printf("you typed:\t%s",c);

    return(0);

}

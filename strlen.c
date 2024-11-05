#include <stdio.h>

int mystrlen(char a[]);
int main()
{
    char a[] = "789";
    printf("%d\n", mystrlen(a));

    return 0;
}

int mystrlen(char a[])
{
    int i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    return i;
}
#include <stdio.h>

int main(void)
{ 
    int i;
    char a[5];
    a[0]='a';
    a[1]='b';
    a[2]='c';
    for(i=0;i<3;i++)
    {
        putchar(a[i]);
        putchar('\n');
    }
    return 0;
}


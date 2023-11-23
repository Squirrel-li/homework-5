#include<stdio.h>

void stringReverse(char *sPtr)
{
    if(*sPtr == '\0') return;
    stringReverse(sPtr+1);
    printf("%c",    *sPtr);
}

int main()
{
    char s[100];
    scanf("%s",    s);
    stringReverse(s);
    printf("\n");

    system("PAUSE");
    return 0;
}

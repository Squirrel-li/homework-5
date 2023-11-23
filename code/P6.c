#include<stdlib.h>
#include<stdio.h>

int cubeByValue(int n);

int main()
{
    int number = 5;
    printf("The original value of number is %d",    number);

    number = cubeByValue(number);

    printf("\nThe new value of number is %d\n",    number);
    
    system("PAUSE");
    return 0;
}

int cubeByValue(int n)
{
    return n * n * n;
}

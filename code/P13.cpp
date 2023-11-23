#include<stdio.h>
#include<stdlib.h>

void cubeByValue(int &nPtr);


int main()
{
    int number = 5;
    printf("The original value of number is %d",    number);

    cubeByValue(number);

    printf("\nThe new value of number is %d\n",    number);
    
    system("PAUSE");
    return 0;
}

void cubeByValue(int &nPtr)
{
    nPtr = nPtr * nPtr * nPtr;
}

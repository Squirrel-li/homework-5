#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int *aPtr;

	a = 7;
	aPtr = &a;

	printf("The address of a is %p"
	"\nThe value of *aPtr is %d",   
	a,    aPtr);

	printf("\n\nThe value of a is %d"
	"\nThe value of *aPtr us %d",   
	a,    *aPtr);
	printf("\n\nShowing that * and & are comple"
	"each other\n&*aPtr = %p"
	"\n*&aPtr - %p\n",   
	&*aPtr,    *&aPtr);
	system("pause");

	system("PAUSE");
	return 0;
}

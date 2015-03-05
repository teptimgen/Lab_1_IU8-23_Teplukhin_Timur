#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//###########################################################################
typedef unsigned int uint;
typedef unsigned char uchar;
//###########################################################################
int main()
{
	uint n, i, j;
	uchar buf;
	//-----------------------------------------------------------------------
	printf("Enter number of array elements: ");
	scanf("%d", &n);
	//-----------------------------------------------------------------------
	uchar *uchar_array = (uchar *)malloc(n*sizeof(uchar));
	printf("\nInitial array.\n");
	for (uint i = 0; i < n; i++)
	{
		uchar_array[i] = rand();
		printf("%d ", uchar_array[i]);
	}
	//-----------------------------------------------------------------------
	for (i = n - 1; i > 0; i--)
		for (j = 0; j < i; j++)
			if (uchar_array[j] > uchar_array[j + 1])
			{
				buf = uchar_array[j]; uchar_array[j] = uchar_array[j + 1];
				uchar_array[j + 1] = buf;
			}
	//-----------------------------------------------------------------------
	printf("\n\nSorted array.\n");
	for (i = 0; i < n; i++) printf("%d ", uchar_array[i]);
	//-----------------------------------------------------------------------
	_getch();
	return 0;
}
//###########################################################################

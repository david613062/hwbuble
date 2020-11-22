#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i, j, d;
	int a[9] = {6,5,7,9,15,3,23,25,14};
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[j] > a[j + 1])
			{
				d = a[j];
				a[j] = a[j + 1];
				a[j + 1] = d;
				
			}
		}
	}
	   for (i = 0; i < 9 ; i++)
	   {
		   printf("%4d",a[i]);
	   }
	
	system("pause");
}
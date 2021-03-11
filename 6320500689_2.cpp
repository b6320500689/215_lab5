#include <stdio.h>
int main ()
{
	int n=1,x=0,y,i,j;
	if (n<=1000 && n>=1)
		scanf("%d",&n);
	if (n%2 == 0)
	{
  		n--;
  		x++;
  		y = ((n+x)/2)-1;
	}
	else
	{
		y = ((n+x)/2);
	}
	
	for (i=0; i<(n+x)/2; i++)
	{
		for (j=0; j<n; j++)
		{
			if (j == (n/2)-i || j == (n/2)+i)
				printf ("*");
			else
				printf ("_");
		}
		printf ("\n");
	}
	
	for (i=0; i<=y; i++)
	{
		for (j=0; j<n; j++)
		{
			if (j == i || j == (n-1)-i)
				printf ("*");
			else
				printf ("_");
		}
		printf ("\n");
	}
	return 0;
}

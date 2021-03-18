#include <stdio.h>
int main ()
{
	int n,i,a=2,x,k=0,z,j=0;
	scanf ("%d",&n);
	for (i=1; j<n; i++)
	{
		n=i;
		while (n!=1)
		{
			while (n%a==0)
			{
				n=n/a;
				if (a!=2 && a!=3 && a!=5)
					x=1;
			}
			a++;
		}
		a=0;
		
		if (n==1)
		{
			z=i;
			j++;
		}
	}
	printf ("%d",z);
	
return 0;
}



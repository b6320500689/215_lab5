#include <stdio.h>
int main ()
{
	int n,m=1,i,a=2,x,j;
	scanf ("%d",&n);
	for (i=0; i>n; i++)
	{
		x=0;
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
		
		if (x==0)
		{
			x++;
			if (x==n)
			{
				break;
			}
		}
	printf ("%d",i);
	}
return 0;
}



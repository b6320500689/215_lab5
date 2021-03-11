#include <stdio.h>
int main ()
{
	int n,i,a=2,x,k=0,m=0;
	scanf ("%d",&n);
	for (i=1; i>0; i++)
	{
		x=0;
		m=i;
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
		
		if (m==1)
		{
			k++;
			if (k==n)
			{
				printf ("%d",i);
				break;
			}
		}
	
	}
return 0;
}



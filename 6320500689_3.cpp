#include <stdio.h>
int main ()
{
	int n,m=1,i;
	scanf ("%d",&n);
	for (i=0; i<n; i++)
	{
		if ((m%2==0 || m%3==0 || m%5==0 || m==1 || m==2 || m==3 || m==5) && (m!=7))
		{
			m++;
		}
		else
		{
			i--;
			m++;
		}
	
	}
	printf ("%d",m);
	return 0;
}

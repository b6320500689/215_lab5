#include <stdio.h>
int main ()
{
	int n=1,x=0,y;
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
	printf ("%d",y);
	return 0;
}

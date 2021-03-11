#include <stdio.h>
int main ()
{
	int a=0,b=0,c=0;
	if (a<=40000 && a>=0)
		scanf ("%d",&a);
	if (b<=40000 && b>=0)
		scanf ("%d",&b);
	if (c<=40000 && c>=0)
		scanf ("%d",&c);
	
	printf ("%d\n%d\n%d\n",a,b,c);
	return 0;
}

#include <stdio.h>
int main ()
{
	int a=0,b=0,c=0,m,l,d,e,f,i;
	if (a<=40000 && a>=0)
		scanf ("%d",&a);
	if (b<=40000 && b>=0)
		scanf ("%d",&b);
	if (c<=40000 && c>=0)
		scanf ("%d",&c);
		
	while(a>0)
	{
        m=(a%10);
        a=(a/10);
        l=m*i;
        d=d+l;
        i=i*2;
    }
    while(b>0)
	{
        m=(b%10);
        b=(b/10);
        l=m*i;
        e=e+l;
        i=i*2;
    }
    while(c>0)
	{
        m=(c%10);
        c=(c/10);
        l=m*i;
        f=f+l;
        i=i*2;
    }
    printf("%d\n%d\n%d\n",d,e,f);
	
	//printf ("%d\n%d\n%d\n",a,b,c);
	return 0;
}

#include<stdio.h>

double e(int x,int n)
{
	static double s;
	
	if(n==0)
		return s;
	s=1+x*s/n;
	return e(x,n-1);
}

int main()
{
	printf("%lf\n",e(1,10));
	return 0;
}

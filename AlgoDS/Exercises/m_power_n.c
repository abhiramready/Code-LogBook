#include<stdio.h>

int power(int m,int n)
{
	if(n==0)
		return 1;
	return power(m,n-1)*m;
}

int power1(int m,int n)
{
	if(n==0)
		return 1;
	//even
	if(n%2==0)
		return power1(m*m,n/2);
	//odd
	return m*power1(m*m,(n-1)/2);
}

int main()
{
	int i;
	i=power(2,8);
	printf("%d\n",i);
	i=power1(2,8);
	printf("%d\n",i);
	return 0;
}

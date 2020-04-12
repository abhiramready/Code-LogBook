#include<stdio.h>
int main()
{
	char a[]="wElComE";
	int i;
	for(i=0;a[i]!='\0';i++)
	{	
	//upper case A-Z 65-90
		if(a[i]>=65 && a[i]<=90)
			a[i]+=32;
	//lowercase a-z 90-122
		else if(a[i]>=97 && a[i]<=122)
			a[i]-=32;
	//other characters will be untouched	
	}
	printf("%s",a);
	return 0;
}

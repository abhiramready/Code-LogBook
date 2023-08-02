#include<stdio.h>
 int main()
{
	char a[]="Teacher";
	char b[]="Teaching";
	int i,j;
	/*
	Note smaller letter have higher ascii value
	p>P hence if we want to ignore the case
	better convert all letters to one case
	*/
	for(i=0,j=0;a[i]!='\0' && b[j]!='\0';i++,j++)
 	{
 		if(a[i]!=b[j])
			break;	
	}
	
	if(a[i]==b[j])
		printf("Equal");
	else if(a[i]<b[j])
		printf("First string is smaller");
	else
		printf("First is greater");
return 0;
}



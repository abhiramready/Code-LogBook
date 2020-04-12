#include<stdio.h>
int valid(char *name)
{
	int i;
	for(i=0;name[i]!='\0';i++)
	{
		if(!(name[i]>=65 && name[i]<=90) &&
		!(name[i]>=90 && name[i]<=122) &&
		!(name[i]>=48 && name[i]<=57))
		//invalid other than capital,small letters or numbers
			return 0;
	}
	//valid
	return 1;
	
}
int main()
{
	char *c="Abhi?321";
	char *s="Abhi123";
	if(valid(c))
		printf("\nValid String.");
	else
		printf("\nInvalid String.");

	if(valid(s))
		printf("\nValid String.");
	else
		printf("\nInvalid String.");
	return 0;	
}

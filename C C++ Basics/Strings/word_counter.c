#include<stdio.h>
int main()
{
	//word counter
	char a[]="Money Heist is Awesome";
	int i,word=1;
	//starts with one.
	for(i=0;a[i]!='\0';i++)
	{	
		//there maybe more than one white space
		if(a[i]==' ' && a[i-1]!=' ')
			word++;
	}
	printf("No. of words are : %d",word);
	return 0;
}

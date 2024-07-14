#include<stdio.h>
int main()
{
	char c[20];
	// I want to give hello world but scanf reads 
	// only hello after space it does not read.
	//  scanf("%s",&c);
	gets(c);
	//gets() reads full string till I hit enter 
	printf("%s",c);
	return 0;
}

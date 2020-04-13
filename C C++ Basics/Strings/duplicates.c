#include<stdio.h>
 int main()
 {
	//finding duplicates in a string
 	char a[]="Sathyabama";
 	int h[26],i;
 	//preparing hash table
 	for(i=0;i<26;i++)
 		h[i]=0;
 	
	 for(i=0;a[i]!='\0';i++)
 	{
 	//marking in hash table
 	h[a[i]-97]+=1;
	}	
	
	for(i=0;i<26;i++)
	{	
	if(h[i]>1)
	{
		printf("%c Appears ",i+97);
		printf("%d times.",h[i]);
	}
	}
 }

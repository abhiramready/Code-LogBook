 #include<stdio.h>
 int main()
 {
 	//take a mutable string
 	char t,a[]="octopus";
 	int i,j;
 	for(j=0;a[j]!='\0';j++)
 	{
 	//now j will store length of string	
	}
	j=j-1;
	for(i=0;i<j;i++,j--)
	{	
	//swap
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	printf("%s",a);
 }

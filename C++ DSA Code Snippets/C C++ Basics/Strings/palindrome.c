 #include<stdio.h>
 int main()
 {
 	char a[]="madam";
 	int i,j,t=0;
 	for(j=0;a[j]!='\0';j++)
 	{
 	//now j will store length of string	
	}
	j=j-1;
	for(i=0;i<j;i++,j--)
	{	
	if(a[i]!=a[j])
		{
			t+=1;
			break;
		}
	}
	if(t>0)
		printf("Not a Palindrome");
	else
		printf("Palindrome"); 
}

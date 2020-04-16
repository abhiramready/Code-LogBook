 #include<stdio.h>
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

 void perm(char s[],int l,int h)
 {
 	int i;
 	if(l==h)
 		printf("%s\n",s);
 	else
 	{
 		for(i=l;i<=h;i++)
 		{
 		swap(&s[l],&s[i]);
		perm(s,l+1,h);
		swap(&s[l],&s[i]);
		}
	}
 }
 
 int main()
{
	char s[]="ABC";
	perm(s,0,2);
}

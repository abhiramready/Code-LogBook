#include<stdio.h>
#include<stdlib.h>
int  main()
{
	int *a,n,ch,x,j,i;
	
	printf("\nEnter dimension");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	/* a=new int[n] in cpp*/
	
	do
	{
		//Display Menu
		printf("Diagonal Matrix \n Enter 1 to read");
		printf("\n Enter 2 to get a value");
		printf("\n Enter 3 to set a value");
		printf("\n Enter 4 to display the matrix");
		printf("\n Enter 5 to Exit.");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:for(i=1;i<=n;i++)
					scanf("%d",&a[i-1]);
					break;
			
			case 2:printf("\nEnter indices");
					scanf("%d%d",&i,&j);
					if(i==j)
						printf("%d",a[i-1]);
					else
						printf("0");
						break;
			case 3:printf("\nEnter row,column and element");
					scanf("%d%d%d",&i,&j,&x);
					if(i==j)
						a[i-1]=x;
					break;
			case 4:for(i=1;i<=n;i++)
					{
					for(j=1;j<=n;j++)
					{
						if(i==j)
							printf("%d ",a[i-1]);
						else
							printf("0 ");
					}
					printf("\n");
					}						
						
		}
	}while(ch!=5);
	return 0;
}

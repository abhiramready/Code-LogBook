#include<stdio.h>
int main()
{
    int line,col,n,print;
    scanf("%d",&n);
    for(line=0;line<n;printf("\n"),line+=2)
    {
        print=line*n+1;
        for(col=1;col<=n;col++)
        printf(" %02d ",print++);
    }
    for(line=n%2==0?n-1:n-2;line>0;printf("\n"),line-=2)
    {
         print=line*n+1;
        for(col=1;col<=n;col++)
        printf(" %02d ",print++);
    }
    return 0;
}
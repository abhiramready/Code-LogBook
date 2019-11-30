#include<stdio.h>
int main()
{
    int line, col, N, print;
    scanf("%d",&N);
    for(line=0;line<N;printf("\n"),line+=2)
    {
       print=line*N+1;
       for(col=1;col<=N;col++)
       if(col==N)
            printf("%02d ",print++);
       else
        printf("%02d*",print++);
    }

    for(line=N%2==0?N-1:N-2;line>0;printf("\n"),line-=2)
    {
       print=line*N+1;
       for(col=1;col<=N;col++)
        if(col==N)
            printf("%02d ",print++);
       else
        printf("%02d*",print++);
    }
    return 0;
}

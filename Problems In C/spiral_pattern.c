#include<stdio.h>
#define MIN(a,b) (a<b?a:b)
int getIndex(int N, int line, int col)
{
    int X, Y;
    X=MIN(line, N-line-1);
    Y=MIN(col, N-col-1);
    return MIN(X,Y);
}
int getVal(int N, int line, int col)
{
    int index;
    index=getIndex(2*N-1,line,col);
    return N-index;
}
int main()
{
    int N, line, col;
    scanf("%d",&N);
    for(line=0;line<2*N-1;printf("\n"),line++)
        for(col=0;col<2*N-1;col++)
            printf("%d ",getVal(N, line, col));
    return 0;
}

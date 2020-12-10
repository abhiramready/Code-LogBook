#include<stdio.h>
#define ROWS 4
#define COLS 4
int main()
{
    int *arr, index, rctr, cctr, ctr;
    arr=(int *)malloc(ROWS*COLS*sizeof(int));
    ctr=1;
    for(rctr=0;rctr<ROWS;rctr++)
        for(cctr=0;cctr<COLS;cctr++)
            *(arr+rctr*COLS+cctr)=ctr++;
    for(rctr=0;rctr<ROWS;printf("\n"),rctr++)
        for(cctr=0;cctr<COLS;cctr++)
            printf("%02d ",*(arr+rctr*COLS+cctr));
    return 0;
}

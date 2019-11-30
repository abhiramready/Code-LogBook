#include<stdio.h>
#define ROWS 4
#define COLS 4
int main()
{
    int *arr[ROWS], rctr, cctr, ctr;
    ctr=1;
    for(rctr=0;rctr<ROWS;rctr++)
        arr[rctr]=(int*)malloc(COLS*sizeof(int));
    for(rctr=0;rctr<ROWS;rctr++)
        for(cctr=0;cctr<COLS;cctr++)
            arr[rctr][cctr]=ctr++;
    for(rctr=0;rctr<ROWS;printf("\n"),rctr++)
        for(cctr=0;cctr<COLS;cctr++)
            printf("%2d ",arr[rctr][cctr]);
    return 0;
}

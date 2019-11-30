#include<stdio.h>
void print_matrix(int rows, int cols, int arr[rows][cols])
{
    int rctr, cctr;
    for(rctr=0;rctr<rows;printf("\n"),rctr++)
    {
        for(cctr=0;cctr<cols;cctr++)
            printf("%02d ",arr[rctr][cctr]);
    }
}
void transpose_matrix(int rows,int cols,int arr[rows][cols])
{
    int temp,rctr,cctr;
    for(rctr=0;rctr<rows;rctr++)
    {
        for(cctr=0;cctr<rctr;cctr++)
        {

           temp = arr[rctr][cctr];
           arr[rctr][cctr]=arr[cctr][rctr];
           arr[cctr][rctr]=temp;
        }
    }
}
void col_reverse(int rows, int cols, int arr[rows][cols])
{
    int rctr,temp,cctr;
    for(rctr=0;rctr<rows;rctr++)
    {
        for(cctr=0;cctr<cols;cctr++)
        {
            if(cctr<cols-cctr)
            {
            temp=arr[rctr][cctr];
            arr[rctr][cctr]=arr[rctr][cols-cctr-1];
            arr[rctr][cols-cctr-1]=temp;
        }}
    }
}
int main()
{
    int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    print_matrix(4, 4, arr);
    transpose_matrix(4,4,arr);
    printf("\n");
    print_matrix(4, 4, arr);
    col_reverse(4,4,arr);
    printf("\n");
    print_matrix(4, 4, arr);
    return 0;
}

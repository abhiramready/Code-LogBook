#include<stdio.h>
int main()
{
    char str[]="abcdefghijklmnopqrstuvwxyz", temp;
    int index, len, nor;
    nor=763;
    for(len=0;str[len];len++);
    nor=nor%len;
    while(nor>0)
    {
        temp=str[len-1];
        for(index=len-1;index>=0;index--)
            str[index]=str[index-1];
        str[0]=temp;
        //printf("%s\n",str);
        nor--;
    }
    printf("%s ",str);
    return 0;
}

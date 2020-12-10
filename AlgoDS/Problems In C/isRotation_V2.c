#include<stdio.h>
#include<malloc.h>
int string_len(char str[])
{
    int len;
    for(len=0;str[len];len++);
    return len;
}
void str_cpy_cat(char *newstr, char word1[], int len1)
{
    int ind1, ind2;
    for(ind1=0,ind2=len1;word1[ind1];ind1++,ind2++)
    {
        newstr[ind1]=word1[ind1];
        newstr[ind2]=word1[ind1];
    }
    newstr[ind2]='\0';
}
int search_str(char *newstr, char word2[])
{
    int ind1, ind2, tempind;
    for(ind1=0;newstr[ind1];ind1++)
    {
       for(tempind=ind1,ind2=0;
       word2[ind2]&&newstr[tempind]==word2[ind2];
       ind2++,tempind++);
        if(word2[ind2]=='\0')
        return 1;
    }
    return -1;
}
int main()
{
    char word1[]="sample", word2[]="pmlesa";
    char *newstr;
    int len1, len2, isFound;
    len1=string_len(word1);
    len2=string_len(word2);
    isFound=-1;
    if(len1==len2)
    {
        newstr=(char*)malloc(2*len1+1*sizeof(char));
        str_cpy_cat(newstr,word1, len1);
        isFound=search_str(newstr,word2);
    }
    printf("%d ",isFound);
    return 0;
}

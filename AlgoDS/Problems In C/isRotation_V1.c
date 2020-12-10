#include<stdio.h>
#include<string.h>
#include<malloc.h>
int main()
{
    char word1[]="sample", word2[]="pmlesa";
    char *newstr, *isFound;
    int len1, len2;
    len1=strlen(word1);
    len2=strlen(word2);
    isFound=NULL;
    if(len1==len2)
    {
        newstr=(char*)malloc(2*len1*sizeof(char));
        strcpy(newstr,word1);
        strcat(newstr,word1);
        isFound=strstr(newstr,word2);
    }
    if(isFound)
        printf("Rotations");
    else
        printf("Not rotations");
    return 0;
}

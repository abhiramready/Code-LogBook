#include<stdio.h>
#define isVowel(ch) (ch=='a')||(ch=='A')|| (ch=='e')||(ch=='E')|| (ch=='i')||(ch=='I')||(ch=='o')||(ch=='O')||(ch=='u')||(ch=='U')
int main()
{
    char str[100];
    int asuwish,always;
    scanf("%[^\n]s",str);
    for(asuwish=0,always=0;str[always];always++)
    {
        if(!(isVowel(str[always])))
            str[asuwish++]=str[always];
    }
    str[asuwish]='\0';
    printf("%s ",str);
    return 0;
}

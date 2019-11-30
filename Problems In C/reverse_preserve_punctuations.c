#include<stdio.h>
#define isAllowed(ch) (ch>='0'&&ch<='9')||(ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')
void reverse_string(char str[], int start, int end)
{
    char temp;
    while(start<end)
    {
        for(;str[start]&&(!(isAllowed(str[start])));start++);
        for(;end>=0&&(!(isAllowed(str[end])));end--);
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    char str[]="A man in the boat, says : I see 1-2-3 in the sky";
    int len;
    for(len=0;str[len];len++);
    reverse_string(str, 0, len-1);
    printf("%s",str);

    return 0;
}

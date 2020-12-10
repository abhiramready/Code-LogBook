#include<stdio.h>
void string_reverse(char str[], int start, int end)
{
    char temp;
    while(start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    char str[100];
    int num, rem, index;
    scanf("%d",&num);
    index=0;
    while(num>0)
    {
        rem=num%26;
        if(rem==0)
        {
            rem=26;
            num--;
        }
        str[index++]=rem+64;
        num=num/26;
    }
    str[index]='\0';
    string_reverse(str, 0, index-1);
    printf("%s ",str);
    return 0;
}

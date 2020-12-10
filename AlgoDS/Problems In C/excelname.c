#include<stdio.h>
int main()
{
    char str[100];
    int num,rem,index;
    num=27;
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
    printf("%s",str);
	return 0;
}
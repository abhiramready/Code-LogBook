#include<stdio.h>
int main()
{
    long long int arr[100000];
    long long int stindex, updindex, count, N;
    scanf("%lld",&N);
    arr[0]=3;
    arr[1]=4;
    count=2;
    stindex=0;
    updindex=2;
    while(count<=N)
    {
        arr[updindex++]=arr[stindex]*10LL+3;
        arr[updindex++]=arr[stindex]*10LL+4;
        stindex++;
        count+=2;
    }
    printf("%lld",arr[N-1]);
    return 0;
}

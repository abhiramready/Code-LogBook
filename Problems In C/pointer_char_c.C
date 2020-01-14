#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    char* name[]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d",&n);
    printf( "%s", n>=1 && n<=9 ? name[n-1]: "Greater than 9" ); 
    return 0;
}
// 1 one,   2 two , 99 GReater than 9

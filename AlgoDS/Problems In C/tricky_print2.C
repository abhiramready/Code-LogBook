#include <stdio.h>
int main() {
    if(!printf("Hello "))
    printf("World ");
    else
    printf("Gone ");
    if(!printf(""))
    printf("World");
    return 0;
}

//Hello Gone World 

#define PRINT printf("Star Wars");printf(" Psycho");
#include <stdio.h>
int main() {
    int x=1;
    if(x--)
    PRINT
    else
    printf("The Shawshank Redemption");
    return 0;
}
//



#include <stdio.h>
int main() {
   int x = 1;
    int y = x == 1 ? getchar() : 2;
   printf("%d",y);
}
//outputb-1


#include <stdio.h>
int main() {
   if(printf("Hello"))
   {
       printf(" World");
   }
}
//Hello World


#include <stdio.h>
int main() {
   if("Hello" == printf("Hello"))
   {
       printf(" World");
   }
   else
   {
       printf(" Bye");
   }
}
//Hello bye


#include <stdio.h>
int main() {
    FILE *fp;
    int c;
    fp = fopen(__FILE__,"r");
    do {
         c = getc(fp);
         putchar(c);
    }
    while(c != EOF);
    fclose(fp);
    return 0;
}
//source code is output

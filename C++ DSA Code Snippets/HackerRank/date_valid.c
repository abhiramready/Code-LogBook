#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int dd,mm,yy; 
    scanf("%d/%d/%d",&dd,&mm,&yy); 
    if(yy>=1900 && yy<=9999) 
    { 
        if(mm>=1 && mm<=12) 
        { 
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12)) 
                printf("Valid"); 
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11)) 
                printf("Valid"); 
            else if((dd>=1 && dd<=28) && (mm==2)) 
                printf("Valid"); 
            else if(dd==29 && mm==2 && (yy%400==0 || (yy%4==0 && yy%100!=0))) 
                printf("Valid"); 
            else printf("Invalid"); 
} 
        else 
        { 
            printf("Invalid"); 
        }

}
else
{
    printf("Invalid");
}

    return 0;
}

